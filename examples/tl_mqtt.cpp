/**********************************************************
lib_deps = 
  TinyLink_Library_Arduino
  AliyunMqttArduino

# TINYLINK_SERIAL & TINYLINK_TIME & TINYLINK_HUMIDITY
build_flags =  
  -D TINYLINK_SERIAL=1002
  -D TINYLINK_TIME=1002
  -D TINYLINK_TEMPERATURE=3032
  -D TEMPERATURE_DIGITAL_OUTPUT=2
  -D MQTT_MAX_PACKET_SIZE=256
  -D MQTT_KEEPALIVE=60
************************************************************/

#include <Arduino.h>

#include <SoftwareSerial.h>
#include <WiFiEspClient.h>
#include <WiFiEsp.h>

#include <aliyun_mqtt.h>
#include "TL_Libraries.h"


#define WIFI_SSID "<YOUR WIFI SSID>"
#define WIFI_PASSWORD "<YOUR WIFI PASSWORD>"

// Initialize the Ethernet client object
const int WIFI_RX = 3;
const int WIFI_TX = 4;
SoftwareSerial softSerial(WIFI_RX, WIFI_TX); // RX, TX

void connectWiFi()
{
    int status = WiFi.status();
    // attempt to connect to WiFi network
    while (status != WL_CONNECTED)
    {
        TL_Serial.print(F("Attempting to connect to Wifi: "));
        TL_Serial.println(WIFI_SSID);
        // Connect to WPA/WPA2 network
        status = WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
        delay(500);
    }
}

void initWiFi()
{
    // initialize serial for ESP module
    softSerial.begin(9600);
    // initialize ESP module
    WiFi.init(&softSerial);
    // check for the presence of the shield
    if (WiFi.status() == WL_NO_SHIELD)
    {
        TL_Serial.println(F("WiFi shield not present, stop"));
        // don't continue
        while (true);
    }

    connectWiFi();
    TL_Serial.print(F("Connected to AP: "));
    TL_Serial.println(WiFi.localIP());
}

#define TIMESTAMP "23668" // can be changed to a random positive value string

// Use external HMAC256 calculation for MQTT_PASSWORD: http://tool.oschina.net/encrypt?type=2
// Content: clientId[DEVICE_NAME]deviceName[DEVICE_NAME]productKey[PRODUCT_KEY]timestamp[TIMESTAMP]
// Key: [DEVICE_SECRET]

#define PRODUCT_KEY "<YOUR PRODUCT KEY>"
#define DEVICE_NAME "<YOUR DEVICE NAME>"
#define DEVICE_SECRET "<YOUR DEVICE SECRET>"
#define MQTT_PASSWORD "<YOUR EXTERNAL CALCULAED PASSWORD>"

// https://help.aliyun.com/document_detail/89301.html
#define ALINK_TOPIC_PROP_POST "/sys/" PRODUCT_KEY "/" DEVICE_NAME "/thing/event/property/post"

unsigned long lastSend;

WiFiEspClient espClient;
PubSubClient mqttClient(espClient);

void checkMqttConnection()
{
    // Loop until we're reconnected
    while (!mqttClient.connected())
    {
        TL_Serial.println(F("Connecting to Aliyun IoT ..."));
        // Attempt to connect (clientId, username, password)
        if (connectAliyunMQTTWithPassword(mqttClient, MQTT_PASSWORD))
        {
            TL_Serial.println("[MQTT Connected]");
        }
        else
        {
            TL_Serial.print(F("[MQTT Connect FAILED] [rc = "));
            TL_Serial.print(mqttClient.state());
            TL_Serial.println(F(": retrying in 5 seconds]"));
            // Wait 5 seconds before retrying
            delay(5000);
        }
    }
}

void getAndSendTemperatureData()
{
    // Reading temperature or humidity takes about 250 milliseconds!
    TL_Temperature.read();

    // Prepare a JSON payload string
    String payload = "{";
    payload += "\"temp\":";
    payload += TL_Temperature.data();
    payload += "}";

    // Send payload as Alink data
    String jsonData = F("{\"id\":\"123\",\"version\":\"1.0\",\"method\":\"thing.event.property.post\",\"params\":");
    jsonData += payload;
    jsonData += F("}");

    char alinkData[128];
    jsonData.toCharArray(alinkData, 128);
    mqttClient.publish(ALINK_TOPIC_PROP_POST, alinkData);
    TL_Serial.println(alinkData);
}

void setup()
{
    TL_Serial.begin(115200);
    initWiFi();
    mqttPrepare(TIMESTAMP, PRODUCT_KEY, DEVICE_NAME, DEVICE_SECRET);
    lastSend = 0;
}

void loop()
{
    checkMqttConnection();

    if (TL_Time.millisFromStart() - lastSend >= 10000)
    { // Update and send only after 1 seconds
        getAndSendTemperatureData();
        lastSend = TL_Time.millisFromStart();
    }
    mqttClient.loop();
}

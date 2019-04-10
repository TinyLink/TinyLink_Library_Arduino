/**********************************************************
lib_deps = 
  TinyLink_Library_Arduino

# TINYLINK_SERIAL & TINYLINK_TIME & TINYLINK_LED & TINYLINK_MQTT 
# is on the development board
# TINYLINK_WIFI id is 3052, reprents esp8266
# TINYLINK_light id is 3023, reprents grove light 
# LIGHT_ANALOG reprents the gpio pin number

build_flags =
  -D TINYLINK_SERIAL=1002
  -D TINYLINK_TIME=1002
  -D TINYLINK_LED=1002
  -D TINYLINK_MQTT=1002
  -D TINYLINK_WIFI=3052
  -D WIFI_UART_TX=2
  -D WIFI_UART_RX=3
  -D TINYLINK_LIGHT=3023
  -D LIGHT_ANALOG=A1
************************************************************/

#include "TL_Libraries.h"

TL_MQTT mqtt;
// 设置MQTT参数 
int port = 1883;
char serverName[]= "pk.iot-as-mqtt.cn-shanghai.aliyuncs.com"; 
char clientName[] = "******"; 
char userName[] = "*****"; 
char password[] = "*****"; 
char propertyPostTopic[] = "/sys/pk/device/thing/event/property/post"; 
 
unsigned int messageID = 0;   // 消息ID， 自增 
unsigned int deviceID = 0;    // deviceID，默认为0  
 
void setup() { 
  TL_Serial.begin(115200); 
  TL_WiFi.init();             // 连接WiFi
  bool wifi_conn = TL_WiFi.join("SSID", "PASSWORD"); 
  mqtt = TL_WiFi.fetchMQTT(); // 连接MQTT 
  int mqtt_conn = mqtt.connect(serverName, port, clientName, userName, password);   
} 
void loop() { 
  int lightValue = TL_Light.read();    // 读取传感器数据 
  char buf[150]; 
  String payload = "{\"id\":\""; // 根据物模型，构造数据包
  payload += messageID; 
  payload += "\""; 
  payload += ",\"version\":\"1.0\""; 
  payload += ",\"params\":{\"lightValue\":"; 
  payload += lightValue;  
  payload += "},\"method\":\"thing.event.property.post\"}"; 
  int payloadlength = payload.length(); 
  payload.toCharArray( buf, 150 ); 
  mqtt.publish(propertyPostTopic, buf, payloadlength); // 数据包发送到指定Topic 
  messageID++; 
  TL_Serial.println(buf); 
  mqtt.yield(4000); 
} 

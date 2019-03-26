# TinyLink Arduino Uno软件库使用说明

1. 下载[Arduino IDE](https://www.arduino.cc/en/Main/Software)
2. 下载[Arduino库](https://github.com/TinyLink/TinyLink_Library/tree/master/Software_library/Arduino)到本地，将Arduino目录下所有的文件夹拷贝至arduino-1.x.x\libraries下，将[Attention文件夹](https://github.com/TinyLink/TinyLink_Library/tree/master/Software_library/Arduino/Attention)下的WiFiEsp和mqtt拷贝至arduino-1.x.x\libraries下，将[File.cpp](https://github.com/TinyLink/TinyLink_Library/blob/master/Software_library/Arduino/Attention/Origin_SD_lib/File.cpp)覆盖arduino-1.x.x\libraries\SD\src\File.cpp。注意，由于Arduino IDE不会自动编译二级目录下的源文件，需要将TL_Function目录下文件夹中的所有源文件拷贝至TL_Function目录下，用到哪个模块(在TL_Config.h中的定义)就拷贝哪个。例如把TL_Temperature/DHT11/\*.cpp和TL_Temperature/DHT11/\*.h拷贝至TL_Temperature

3. 需要开发者手动编写TL_Config.h文件，编写模板见[wiki说明](https://github.com/TinyLink/TinyLink_Library/wiki/Config_Header_File_Generation)中的TL_Config.h specification
4. 测试文件见sketch.ino和TinyLink/TL_Config.h
5. 在Arduino IDE下编译sketch.ino，烧写文件到开发板

固件原项目https://github.com/SonixQMK/qmk_firmware

前排注意事项，不对任何刷写导致的键盘变砖负责

该固件为单模固件，也就是说，刷完，蓝牙就没了，目前没有恢复的方法（因为没有fekre61原厂固件）
经一年（误）的寻找，找到一个兼容的键盘固件
实测除了键位有区别外，可正常使用
请思考清楚再刷写

刷写需要短接Boot脚位
![image](点位图.png)

插入数据线时短接至GND接地就能进入到刷写模式

首先需要刷写Bootloader

刷写软件里的Flash Jumploader，选择下载的bootloader

刷写完之后，再短接进入刷写模式刷写固件

选qmk offset 0x00


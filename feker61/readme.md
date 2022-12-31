刷写需要短接Boot脚位
![image](点位图.png)

插入数据线时短接至GND接地就能进入到刷写模式

首先需要刷写Bootloader

刷写软件里的Flash Jumploader，选择下载的bootloader

刷写完之后，再短接进入刷写模式刷写固件

选qmk offset 0x00


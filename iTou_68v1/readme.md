固件原项目https://github.com/SonixQMK/qmk_firmware

刷写需要短接Boot脚位

经过测量，方便的地方是轴体这面的空格右边焊盘，或者说元器件面的空格左边焊盘

插入数据线时短接至GND接地(可以接到usb外壳上)就能进入到刷写模式

首先需要刷写Bootloader

刷写软件里的Flash Jumploader，选择下载的bootloader

刷写完之后，再短接进入刷写模式刷写固件

警告！！！！！！！！！！一定要选qmk offset 0x200

选了0x00刷进去直接变砖，血的教训，纪念我失去的一把68V1和Akko 3098

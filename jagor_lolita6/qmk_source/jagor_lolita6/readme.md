# Keychron C2 White

A customizable 100% keyboard.

* Keyboard Maintainer(s): edlf
* Hardware Supported: Keychron C2 White
* Hardware Availability: [Keychron](https://www.keychron.com/products/keychron-c1-wired-mechanical-keyboard)
* This is based of the Keychron C1 White implementation by IsaacDynamo
* VIA build might get dropped at some point due to lack of RAM

# Install
1. If your keyboard currently has stock firmware installed, put your keyboard first into bootloader by shorting the boot pins found under the spacebar before plugging in your keyboard to the PC. Otherwise, press `Fn + Esc` to put your keyboard into bootloader.
1. Download and run [Sonix Flasher](https://github.com/SonixQMK/sonix-flasher/releases/tag/v0.2.1).
1. In Sonix Flasher, select `SN32F26x` under 'Device'. And select `0x00` as the qmk offset.
1. Click 'Flash QMK...' and flash jumploader-keychron_c2_white.bin. This can be found in 'Pre-Compiled Jumploaders' build by the latest [Sonix keyboard bootloader action](https://github.com/SonixQMK/sonix-keyboard-bootloader/actions). Note C1 jumploader is also compatible, but the `Fn + Esc` will not work.
1. In Sonix Flasher, select `SN32F26x` under 'Device'. And select `0x200` as the qmk offset.
1. Lastly, click 'Flash QMK...' and flash keychron_c1_white_default.bin. This can be found in 'Pre-Compiled Firmware' build by the latest [Sonix QMK firmware action](https://github.com/SonixQMK/qmk_firmware/actions).

# More Info

Make example for this keyboard (after setting up your build environment):

    make keychron/c2/white

[Video](https://www.youtube.com/watch?v=aUiKHdI5Vk8) explaining installation for a similar keyboard.

For more info and detailed flashing instructions, please visit https://github.com/CanUnesi/QMK-on-K6#readme

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

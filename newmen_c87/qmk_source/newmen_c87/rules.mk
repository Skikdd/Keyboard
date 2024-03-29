# project specific files
SRC = ../../../drivers/led/sn32/matrix_sn32f24xx.c

# MCU name
MCU = SN32F268F

# Build Options
#   comment out to disable the options.
#
BOOTMAGIC_ENABLE = yes  # Virtual DIP switch configuration
EXTRAKEY_ENABLE = yes   # Audio control and System control
NKRO_ENABLE = yes       # USB Nkey Rollover


# Custom Key and LED matrix handling
CUSTOM_MATRIX = yes
LED_MATRIX_ENABLE = yes
LED_MATRIX_DRIVER = SN32F26x
LTO_ENABLE = no
# Reduce code size
USE_PROCESS_STACKSIZE    = 0x1C0
USE_EXCEPTIONS_STACKSIZE = 0xF0

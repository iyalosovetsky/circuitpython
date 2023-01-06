USB_VID = 0x303A
USB_PID = 0x80B5
USB_PRODUCT = "FeatherS2 Neo"
USB_MANUFACTURER = "UnexpectedMaker"

IDF_TARGET = esp32s2

CIRCUITPY_ESP_FLASH_MODE = qio
CIRCUITPY_ESP_FLASH_FREQ = 80m
CIRCUITPY_ESP_FLASH_SIZE = 4MB

CIRCUITPY_BITBANG_NEOPIXEL = 1

# Include these Python libraries in firmware.
FROZEN_MPY_DIRS += $(TOP)/frozen/Adafruit_CircuitPython_NeoPixel

CIRCUITPY_ESP_PSRAM_SIZE = 2MB

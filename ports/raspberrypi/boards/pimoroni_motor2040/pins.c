#include "shared-bindings/board/__init__.h"

STATIC const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    { MP_ROM_QSTR(MP_QSTR_MOTOR_1P), MP_ROM_PTR(&pin_GPIO4) },
    { MP_ROM_QSTR(MP_QSTR_MOTOR_1N), MP_ROM_PTR(&pin_GPIO5) },
    { MP_ROM_QSTR(MP_QSTR_MOTOR_2P), MP_ROM_PTR(&pin_GPIO6) },
    { MP_ROM_QSTR(MP_QSTR_MOTOR_2N), MP_ROM_PTR(&pin_GPIO7) },
    { MP_ROM_QSTR(MP_QSTR_MOTOR_3P), MP_ROM_PTR(&pin_GPIO8) },
    { MP_ROM_QSTR(MP_QSTR_MOTOR_3N), MP_ROM_PTR(&pin_GPIO9) },
    { MP_ROM_QSTR(MP_QSTR_MOTOR_4P), MP_ROM_PTR(&pin_GPIO10) },
    { MP_ROM_QSTR(MP_QSTR_MOTOR_4N), MP_ROM_PTR(&pin_GPIO11) },
    { MP_ROM_QSTR(MP_QSTR_NUM_MOTORS), MP_ROM_INT(4) },

    { MP_ROM_QSTR(MP_QSTR_ENCODER_1A), MP_ROM_PTR(&pin_GPIO0) },
    { MP_ROM_QSTR(MP_QSTR_ENCODER_1B), MP_ROM_PTR(&pin_GPIO1) },
    { MP_ROM_QSTR(MP_QSTR_ENCODER_2A), MP_ROM_PTR(&pin_GPIO2) },
    { MP_ROM_QSTR(MP_QSTR_ENCODER_2B), MP_ROM_PTR(&pin_GPIO3) },
    { MP_ROM_QSTR(MP_QSTR_ENCODER_3A), MP_ROM_PTR(&pin_GPIO12) },
    { MP_ROM_QSTR(MP_QSTR_ENCODER_3B), MP_ROM_PTR(&pin_GPIO13) },
    { MP_ROM_QSTR(MP_QSTR_ENCODER_4A), MP_ROM_PTR(&pin_GPIO14) },
    { MP_ROM_QSTR(MP_QSTR_ENCODER_4B), MP_ROM_PTR(&pin_GPIO15) },
    { MP_ROM_QSTR(MP_QSTR_NUM_ENCODERS), MP_ROM_INT(4) },

    { MP_ROM_QSTR(MP_QSTR_TX_TRIG), MP_ROM_PTR(&pin_GPIO16) },
    { MP_ROM_QSTR(MP_QSTR_RX_ECHO), MP_ROM_PTR(&pin_GPIO17) },

    { MP_ROM_QSTR(MP_QSTR_LED_DATA), MP_ROM_PTR(&pin_GPIO18) },
    { MP_ROM_QSTR(MP_QSTR_NUM_LEDS), MP_ROM_INT(1) },

    { MP_ROM_QSTR(MP_QSTR_INT), MP_ROM_PTR(&pin_GPIO19) },
    { MP_ROM_QSTR(MP_QSTR_GP19), MP_ROM_PTR(&pin_GPIO19) },
    { MP_ROM_QSTR(MP_QSTR_SDA), MP_ROM_PTR(&pin_GPIO20) },
    { MP_ROM_QSTR(MP_QSTR_GP20), MP_ROM_PTR(&pin_GPIO20) },
    { MP_ROM_QSTR(MP_QSTR_SCL), MP_ROM_PTR(&pin_GPIO21) },
    { MP_ROM_QSTR(MP_QSTR_GP21), MP_ROM_PTR(&pin_GPIO21) },

    { MP_ROM_QSTR(MP_QSTR_USER_SW), MP_ROM_PTR(&pin_GPIO23) },

    { MP_ROM_QSTR(MP_QSTR_ADC_ADDR_0), MP_ROM_PTR(&pin_GPIO22) },
    { MP_ROM_QSTR(MP_QSTR_ADC_ADDR_1), MP_ROM_PTR(&pin_GPIO24) },
    { MP_ROM_QSTR(MP_QSTR_ADC_ADDR_2), MP_ROM_PTR(&pin_GPIO25) },

    { MP_ROM_QSTR(MP_QSTR_GP26_A0), MP_ROM_PTR(&pin_GPIO26) },
    { MP_ROM_QSTR(MP_QSTR_GP26), MP_ROM_PTR(&pin_GPIO26) },
    { MP_ROM_QSTR(MP_QSTR_A0), MP_ROM_PTR(&pin_GPIO26) },

    { MP_ROM_QSTR(MP_QSTR_GP27_A1), MP_ROM_PTR(&pin_GPIO27) },
    { MP_ROM_QSTR(MP_QSTR_GP27), MP_ROM_PTR(&pin_GPIO27) },
    { MP_ROM_QSTR(MP_QSTR_A1), MP_ROM_PTR(&pin_GPIO27) },

    { MP_ROM_QSTR(MP_QSTR_GP28_A2), MP_ROM_PTR(&pin_GPIO28) },
    { MP_ROM_QSTR(MP_QSTR_GP28), MP_ROM_PTR(&pin_GPIO28) },
    { MP_ROM_QSTR(MP_QSTR_A2), MP_ROM_PTR(&pin_GPIO28) },

    { MP_ROM_QSTR(MP_QSTR_SHARED_ADC), MP_ROM_PTR(&pin_GPIO29) },

    { MP_ROM_QSTR(MP_QSTR_CURRENT_SENSE_1_ADDR), MP_ROM_INT(0b000) },
    { MP_ROM_QSTR(MP_QSTR_CURRENT_SENSE_2_ADDR), MP_ROM_INT(0b001) },
    { MP_ROM_QSTR(MP_QSTR_CURRENT_SENSE_3_ADDR), MP_ROM_INT(0b010) },
    { MP_ROM_QSTR(MP_QSTR_CURRENT_SENSE_4_ADDR), MP_ROM_INT(0b011) },
    { MP_ROM_QSTR(MP_QSTR_VOLTAGE_SENSE_ADDR), MP_ROM_INT(0b100) },
    { MP_ROM_QSTR(MP_QSTR_FAULT_SENSE_ADDR), MP_ROM_INT(0b101) },
    { MP_ROM_QSTR(MP_QSTR_SENSOR_1_ADDR), MP_ROM_INT(0b110) },
    { MP_ROM_QSTR(MP_QSTR_SENSOR_2_ADDR), MP_ROM_INT(0b111) },
    { MP_ROM_QSTR(MP_QSTR_NUM_SENSORS), MP_ROM_INT(2) },

    { MP_ROM_QSTR(MP_QSTR_I2C), MP_ROM_PTR(&board_i2c_obj) },
    { MP_ROM_QSTR(MP_QSTR_STEMMA_I2C), MP_ROM_PTR(&board_i2c_obj) },

    { MP_ROM_QSTR(MP_QSTR_UART), MP_ROM_PTR(&board_uart_obj) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);

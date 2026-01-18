#include "main.h"
#include "stm32f1xx_hal_def.h"
#include "stm32f1xx_hal_i2c.h"

#define TCS3472_GAIN_1X 0x00
#define TCS3472_GAIN_4X 0x01
#define TCS3472_GAIN_16X 0x02
#define TCS3472_GAIN_60X 0x03

#define TCS3472_RGBC_TIMING_2_4_MS 0xFF // Max count 1024
#define TCS3472_RGBC_TIMING_24_MS 0xF6 // Max count 10240
#define TCS3472_RGBC_TIMING_42_MS 0xD5 // Max count 43008
#define TCS3472_RGBC_TIMING_64_MS 0xC0 // Max count 65535
#define TCS3472_RGBC_TIMING_256_MS 0x00 // Max count 65535

HAL_StatusTypeDef tcs3472_init(I2C_HandleTypeDef *hi2c, uint8_t rgbc_gain, uint8_t rgbc_timing);
HAL_StatusTypeDef tcs3472_read_colors(I2C_HandleTypeDef *hi2c, uint16_t* colors);

#include "driver/adc.h"
#include "driver/adc_types_legacy.h"
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "hal/adc_types.h"
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>
#include "math.h"
#include "sen0564.h"

// Sensor param


float input;
float real_value;

float map(float x, float in_min, float in_max, float out_min, float out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

float sensor_value(){
	adc1_config_width(ADC_WIDTH_BIT_12);
    adc1_config_channel_atten(ADC_CHAN, ADC_ATTEN_DB_12);
  	int sensor_adc = adc1_get_raw(ADC_CHAN);
  	float voltage = map(sensor_adc, 0, 4095, 0, 3.3);
	float ppm = powf(10.0, (voltage-b)/a);
	return ppm;
}

#include <stdint.h>
#include <stdio.h>
#include <unistd.h>
#include "adc1_private.h"
#include "driver/adc_types_legacy.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "hal/adc_types.h"
#include "driver/gpio.h"
#include "driver/adc.h"

void app_main(void)

{
    adc1_config_width(ADC_WIDTH_BIT_12);
    adc1_config_channel_atten(ADC1_CHANNEL_2, ADC_ATTEN_DB_12);
    while(1){
	   uint16_t  num = adc1_get_raw(ADC1_CHANNEL_2);
	   printf(" NUM = %d \n",num);
	   vTaskDelay(1000/portTICK_PERIOD_MS);
	   }

}
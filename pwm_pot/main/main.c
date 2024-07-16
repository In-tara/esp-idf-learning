#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <inttypes.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "hal/ledc_types.h"
#include "portmacro.h"
#include "soc/clk_tree_defs.h"
#include <driver/ledc.h>
#include "driver/gpio.h"
#include "chiptree_pwm.h"
#include "driver/adc.h"

#define POT GPIO_NUM_2

void app_main(void)
{
	adc1_config_width(ADC_WIDTH_BIT_12);
	adc1_config_channel_atten(ADC1_CHANNEL_2,ADC_ATTEN_DB_0);
   
   while(1){
	   int  val = adc1_get_raw(ADC1_CHANNEL_2);
	   printf("val = %d \n",val);
	   vTaskDelay(1000/portTICK_PERIOD_MS);
   }
}

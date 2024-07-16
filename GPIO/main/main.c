#include <stdio.h>
#include "driver/dedic_gpio.h"
#include "driver/gpio.h"
#include "esp_rom_gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "hal/gpio_types.h"
#include "soc/gpio_num.h"

#define PUSH_BUTTON 2


void app_main(void)
{
    gpio_set_direction(PUSH_BUTTON, GPIO_MODE_INPUT);

    while(1){
		
		if(gpio_get_level(PUSH_BUTTON) == 0){
			printf("fale \n");
		}else{
			printf("true \n");
		}
		vTaskDelay(100);
	}
}

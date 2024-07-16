#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "hal/ledc_types.h"
#include "portmacro.h"
#include "soc/clk_tree_defs.h"
#include <driver/ledc.h>
#include "driver/gpio.h"
#include "chiptree_pwm.h"


void app_main(void){
pwm_init();
while (1){
	for(int i = 0; i<=1023; i++){
		pwm_set(i);
		vTaskDelay(10/portTICK_PERIOD_MS);
	}
}
}

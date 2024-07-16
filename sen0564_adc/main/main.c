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


void app_main(void) {
  
  while (true) {
	float ppm_val = sensor_value();
	printf("ppm = %.2f", ppm_val);
  }
}




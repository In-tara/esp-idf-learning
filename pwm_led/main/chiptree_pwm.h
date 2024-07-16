/*
 * chiptree_pwm.h
 *
 *  Created on: Jul 15, 2024
 *      Author: ASUS
 */

#ifndef MAIN_CHIPTREE_PWM_H_
#define MAIN_CHIPTREE_PWM_H_

#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "hal/ledc_types.h"
#include "soc/clk_tree_defs.h"
#include <driver/ledc.h>
#include "driver/gpio.h"

#define PWM_PIN GPIO_NUM_3

void pwm_init(void);
void pwm_set(uint16_t duty);

#endif /* MAIN_CHIPTREE_PWM_H_ */

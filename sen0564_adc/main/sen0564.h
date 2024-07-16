/*
 * sen0564.h
 *
 *  Created on: Jul 16, 2024
 *      Author: ASUS
 */

#ifndef MAIN_SEN0564_H_
#define MAIN_SEN0564_H_


#define ADC_CHAN (ADC1_CHANNEL_2)

// Sensor param
float a = 0.358;
float b = 0.16;

float map(float x, float in_min, float in_max, float out_min, float out_max);
float sensor_value();


#endif /* MAIN_SEN0564_H_ */

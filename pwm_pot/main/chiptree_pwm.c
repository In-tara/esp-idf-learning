#include "chiptree_pwm.h"

void pwm_init(void){
	ledc_timer_config_t led_pwm = {
		.speed_mode = LEDC_LOW_SPEED_MODE,
		.duty_resolution = LEDC_TIMER_10_BIT,
		.timer_num = LEDC_TIMER_0,
		.freq_hz = 5000,
		.clk_cfg = LEDC_AUTO_CLK
		
	};
	ledc_timer_config(&led_pwm);
}

void pwm_set(uint16_t duty){
	ledc_channel_config_t pwm_con = {
		.gpio_num = PWM_PIN,
		.speed_mode = LEDC_LOW_SPEED_MODE,
		.channel = LEDC_CHANNEL_0,
		.timer_sel = LEDC_TIMER_0,
		.duty = duty,
		.hpoint = 0
	};
	ledc_channel_config(&pwm_con);
}
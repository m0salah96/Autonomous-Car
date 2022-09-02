/***********************************************/
/****By:mohamed salah***************************/
/****CAR_PROGRAM.C   ***************************/
/****19/8/2022 9:39pm Portsaid East**************/ 
/***********************************************/
#define   F_CPU 16000000UL
#include <util/delay.h>
 #include <avr/interrupt.h> 
 #include "STD_types.h"
 #include "Bit_math.h"
 #include "STD_types.h"
 #include "DIO_interface.h"
 #include "timer.h"
 #include "UltraSonic_Config.h"
 #include "UltraSonic_Interface.h"




u8 object=0;
u8 sensor_working=0;
u8 rising_edge=0;
u32 timer_counter=0;
u32 distance;
u8 distance_str[10];

void ultrasonic_init(void){


	//ECHO_PULLUP|=(1<<ECHO);
	
	DIO_Void_SetPin(Ultra_Sonic_Echo_PORT,Ultra_Sonic_Echo_PIN);
	enable_ex_interrupt();
	
	timer0_init();
	return;
}

void enable_ex_interrupt(void){

	MCUCR |= (1<<ISC10);		// Trigger INT1 on any logic change.
	GICR  |= (1<<INT1);			// Enable INT1 interrupts.

	return;
}

void ultra_triger(void){
	if(!sensor_working){
		//TRIGER_PORT|=(1<<TRIGER);
		DIO_Void_SetPin(Ultra_Sonic_Trigger_PORT,Ultra_Sonic_Trigger_PIN);
		_delay_us(15);
		//TRIGER_PORT&=~(1<<TRIGER);
		DIO_Void_ClearPin(Ultra_Sonic_Trigger_PORT,Ultra_Sonic_Trigger_PIN);
		sensor_working=1;
	}
}

ISR(INT1_vect){
	if(sensor_working==1){
		if(rising_edge==0){
			TCNT0=0x00;
			rising_edge=1;
			timer_counter=0;
		}
		else{
			distance=(timer_counter*256+TCNT0)/466;
				 if (distance<20)
				 {
					 object=1;
				 }else
				 {
					 object=0;
				 }

			_delay_ms(40);
			timer_counter=0;
			rising_edge=0;
		}
	}}

	ISR(TIMER0_OVF_vect){
		timer_counter++;
		if(timer_counter >730){
			TCNT0=0x00;
			sensor_working=0;
			rising_edge=0;
			timer_counter=0;
		}
	}

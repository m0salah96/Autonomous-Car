/*
 * car_test.c
 *
 * Created: 28-Aug-22 12:25:04 AM
 * Author : COPY CENTER
 */ 

#include <avr/io.h>

#define   F_CPU 16000000UL
#include <util/delay.h>
#include <avr/interrupt.h>
#include  "STD_Types.h"
#include  "BIT_MATH.h"
#include  "util/delay.h"
#include  "DIO_interface.h"
#include "TIMER1_interface.h"
#include "TIMER2_interface.h"
#include "Car_Interface.h"
#include "UltraSonic_Interface.h"
#include "Servo_Interface.h"
#include "LCD_interface.h"
int main(void)
{    
	
	Timer1_Init();
	DIO_Void_Init();
	LCD_Void_Init();
	ultrasonic_init();
	sei();

    while (1) 
    {
		        
			   Servo_Look_Forward();
				_delay_ms(1000);
				ultra_triger();
				 
				while(object==0){
					ultra_triger();
					Car_Forward_Speed2();
					Car_Forward_Speed1();
				    }
				if (object==1)
				{
					Car_Stop();
					_delay_ms(1000);
					Servo_Look_Right();
					
					for (int x=0;x<55;x++)
					{
					ultra_triger();
					}
					
					_delay_ms(1000);
				
					if (object==0)
					{
						Car_Forward_Right();
						_delay_ms(1500);
						Car_Stop();
						_delay_ms(1000);
						Servo_Look_Forward();}
				      else
					  { 
					      Servo_Look_Left();

					          _delay_ms(1000);
					          Car_Forward_Left();
					          _delay_ms(1500);
					          Car_Stop();
						      _delay_ms(1000);					       
					          Servo_Look_Forward();
					               ultra_triger();       
						                    }
						  
						  
					         }
				}
	}

		

/***********************************************/
/****By:mohamed salah***************************/
/****Servo_PROGRAM.C   ***************************/
/****19/8/2022 9:39pm Portsaid East**************/ 
/***********************************************/
#define   F_CPU 16000000UL
#include <util/delay.h>
#include <avr/interrupt.h>
#include  "STD_Types.h"
#include  "BIT_MATH.h"
#include  "util/delay.h"
#include  "DIO_interface.h"
#include "Servo_Config.h"
#include "Servo_Interface.h"

void Servo_Look_Left(){
						for (int i1=0;i1<50;i1++)
							{DIO_Void_SetPin(DIO_U8_PORTD,DIO_U8_Pin7);
							_delay_ms(2);
							DIO_Void_ClearPin(DIO_U8_PORTD,DIO_U8_Pin7);
							_delay_ms(20);}
							
}
							
							
	void Servo_Look_Forward(){						
					for (int i3=0;i3<50;i3++)
					{DIO_Void_SetPin(DIO_U8_PORTD,DIO_U8_Pin7);
						_delay_ms(1.4);
						DIO_Void_ClearPin(DIO_U8_PORTD,DIO_U8_Pin7);
					_delay_ms(20);}
					
					
	}
					
					
	void Servo_Look_Right(){	
						
					for (int i2=0;i2<50;i2++)
					{DIO_Void_SetPin(DIO_U8_PORTD,DIO_U8_Pin7);
						_delay_ms(0.6);
						DIO_Void_ClearPin(DIO_U8_PORTD,DIO_U8_Pin7);
					_delay_ms(20);}	
					
					}
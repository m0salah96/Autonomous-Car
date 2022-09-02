/***********************************************/
/****By:mohamed salah***************************/
/****CAR_PROGRAM.C   ***************************/
/****19/8/2022 9:39pm Portsaid East**************/ 
/***********************************************/
  
  #define   F_CPU 16000000UL
  #include <util/delay.h>
  #include "STD_types.h"
  #include "Bit_math.h"
  #include "STD_types.h"
  #include "DIO_interface.h"
  #include "TIMER1_interface.h"
  #include "Car_Config.h"
  #include "Car_Interface.h"
  #include "LCD_interface.h"
  
void Car_Forward_Speed1(){
	      LCD_voidSetCursor(1,3);
      	  LCD_voidSendString("Forward");
      DIO_Void_SetPin(H_A1_PORT,H_A1_PIN);
      DIO_Void_ClearPin(H_A2_PORT,H_A2_PIN);
      DIO_Void_SetPin(H_A3_PORT,H_A3_PIN);
      DIO_Void_ClearPin(H_A4_PORT,H_A4_PIN);
      
	 Ph_C_PWM0_AnalogWrite_A(55); // right side
							 
	 Ph_C_PWM0_AnalogWrite_B(55); //left side
	
}
void Car_Forward_Speed2(){
	      LCD_voidSetCursor(1,3);
	      LCD_voidSendString("Forward");
	      DIO_Void_SetPin(H_A1_PORT,H_A1_PIN);
	      DIO_Void_ClearPin(H_A2_PORT,H_A2_PIN);
	      DIO_Void_SetPin(H_A3_PORT,H_A3_PIN);
	      DIO_Void_ClearPin(H_A4_PORT,H_A4_PIN);
	
	
	 Ph_C_PWM0_AnalogWrite_A(80);  // right side
							 
	 Ph_C_PWM0_AnalogWrite_B(80);  //left side
	
}
void Car_Forward_Speed3(){
	     DIO_Void_SetPin(H_A1_PORT,H_A1_PIN);
	     DIO_Void_ClearPin(H_A2_PORT,H_A2_PIN);
	     DIO_Void_SetPin(H_A3_PORT,H_A3_PIN);
	     DIO_Void_ClearPin(H_A4_PORT,H_A4_PIN);
	      
	 Ph_C_PWM0_AnalogWrite_A(90);  // right side
							 
	 Ph_C_PWM0_AnalogWrite_B(90);  //left side
	
}
void Car_Stop(){

	 DIO_Void_ClearPin(H_A1_PORT,H_A1_PIN);
	 DIO_Void_ClearPin(H_A2_PORT,H_A2_PIN);
	 DIO_Void_ClearPin(H_A3_PORT,H_A3_PIN);
	 DIO_Void_ClearPin(H_A4_PORT,H_A4_PIN);
	 
	 Ph_C_PWM0_AnalogWrite_A(0);  // right side
							 
	 Ph_C_PWM0_AnalogWrite_B(0);  //left side
	          LCD_voidSetCursor(1,3);
		      LCD_voidSendString("Stop   ");
             _delay_ms(300);
}



void Car_Forward_Left(){
	      LCD_voidSetCursor(1,3);
		  LCD_voidSendString("Left   ");
		 DIO_Void_SetPin(H_A1_PORT,H_A1_PIN);
		 DIO_Void_ClearPin(H_A2_PORT,H_A2_PIN);
		 DIO_Void_SetPin(H_A3_PORT,H_A3_PIN);
		 DIO_Void_ClearPin(H_A4_PORT,H_A4_PIN);
	
	 Ph_C_PWM0_AnalogWrite_A(0);  // right side
							 
	 Ph_C_PWM0_AnalogWrite_B(70);  //left side
	
	
}

void Car_Forward_Right(){
	     LCD_voidSetCursor(1,3);
		 LCD_voidSendString("Right   ");
		 DIO_Void_SetPin(H_A1_PORT,H_A1_PIN);
		 DIO_Void_ClearPin(H_A2_PORT,H_A2_PIN);
		 DIO_Void_SetPin(H_A3_PORT,H_A3_PIN);
		 DIO_Void_ClearPin(H_A4_PORT,H_A4_PIN);
	
	
	 Ph_C_PWM0_AnalogWrite_A(70);  // right side
							 
	 Ph_C_PWM0_AnalogWrite_B(0);  //left side
	
	
}


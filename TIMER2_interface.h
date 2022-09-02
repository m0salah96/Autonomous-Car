/***********************************************/
/****By:mohamed salah***************************/
/****TIMER2_INTERFACE.H   ***************************/
/****23/8/2022 3:20pm **************/ 

#ifndef TIMER2_INTERFACE_H_
#define TIMER2_INTERFACE_H_
 

void Timer2_Init();
	
void Load_Comp_Reg2(u8 Comp_value);
	
void F_PWM2_AnalogWrite( u8 D_C_Percent);//Non_Inverted mode-- fast PWM
	
void F_PWM2_Servo( u8 Servo_Angle); 

void Ph_C_PWM2_AnalogWrite( u8 D_C_Percent);  //in Non_inverted Phase correct mode  only
	

void Timer2_Reset();

 void Timer2_Ov_Flag_Reset();

#endif

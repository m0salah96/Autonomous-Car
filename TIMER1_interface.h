/***********************************************/
/****By:mohamed salah***************************/
/****TIMER_INTERFACE.H   ***************************/
/****23/8/2022 3:20pm **************/ 

#ifndef TIMER_INTERFACE_H_
#define TIMER_INTERFACE_H_

void Timer1_Init();

void Load_Comp_Reg_A( u16 Comp_value);

void Load_Comp_Reg_B( u16 Comp_value);
	 
void F_PWM0_AnalogWrite_A( u8 D_C_Percent);//Non_Inverted mode

void Ph_C_PWM0_AnalogWrite_A( u8 D_C_Percent);  //in Non_inverted Phase correct mode mode only
 
void Ph_C_PWM0_AnalogWrite_B( u8 D_C_Percent);   //in Non_inverted Phase correct mode mode only
	
void Timer1_Reset();
	
void Timer1_OC_FlagA_Reset();
	  
void Timer1_OC_FlagB_Reset();
 
void Timer1_OV_Flag_Reset();
	  

#endif

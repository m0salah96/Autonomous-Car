/***********************************************/
/****By:mohamed salah***************************/
/****TIMER_PROGRAM.H   ***************************/
/****23/8/2022 3:20pm **************/ 
  #include "STD_types.h"
  #include "Bit_math.h"
  #include "STD_types.h"
  #include "TIMER1_private.h"         
  #include "TIMER1_interface.h"
  #include "TIMER1_config.h"        
  
  
  
  
void Timer1_Init(){
//{Normal,,,PWM_Ph_C_8BIT,,,PWM_Ph_C_9BIT,,,PWM_Ph_C_10BIT,,,CTC_OCR1A,,,Fast_PWM_8BIT,,,Fast_PWM_9BIT,,,Fast_PWM_10BIT
//PWM_PH_F_C_ICR1,,,PWM_PH_F_C_OCR1A,,,PWM_PH_C_ICR1,,,PWM_PH_C_0CR1A,,,CTC_ICR1,,,FAST_PWM_ICR1,,,FAST_PWM_OCR1A}
	
#if Wave_generation_mode==Normal             //0
ClearBit(TCCR1A,WGM13) ;
ClearBit(TCCR1A,WGM12) ;
ClearBit(TCCR1A,WGM11) ;
ClearBit(TCCR1A,WGM10) ;	
#elif Wave_generation_mode==PWM_Ph_C_8BIT   //1
ClearBit(TCCR1A,WGM13) ;
ClearBit(TCCR1A,WGM12) ;
ClearBit(TCCR1A,WGM11) ;
SetBit(TCCR1A,WGM10) ;
#elif Wave_generation_mode== PWM_Ph_C_9BIT   //2
ClearBit(TCCR1A,WGM13) ;
ClearBit(TCCR1A,WGM12) ;
SetBit(TCCR1A,WGM11) ;
ClearBit(TCCR1A,WGM10) ;
#elif Wave_generation_mode== PWM_Ph_C_10BIT   //3
ClearBit(TCCR1A,WGM13) ;
ClearBit(TCCR1A,WGM12) ;
SetBit(TCCR1A,WGM11) ;
SetBit(TCCR1A,WGM10) ;
#elif Wave_generation_mode==CTC_OCR1A       //4
ClearBit(TCCR1A,WGM13) ;
SetBit(TCCR1A,WGM12) ;
ClearBit(TCCR1A,WGM11) ;
ClearBit(TCCR1A,WGM10) ;	

#elif Wave_generation_mode== Fast_PWM_8BIT	  //5
ClearBit(TCCR1A,WGM13) ;
SetBit(TCCR1A,WGM12) ;
ClearBit(TCCR1A,WGM11) ;
SetBit(TCCR1A,WGM10) ;
#elif Wave_generation_mode== Fast_PWM_9BIT	  //6
ClearBit(TCCR1A,WGM13) ;
SetBit(TCCR1A,WGM12) ;
SetBit(TCCR1A,WGM11) ;
ClearBit(TCCR1A,WGM10) ;
#elif Wave_generation_mode== Fast_PWM_10BIT	  //7
ClearBit(TCCR1A,WGM13) ;
SetBit(TCCR1A,WGM12) ;
SetBit(TCCR1A,WGM11) ;
SetBit(TCCR1A,WGM10) ;


#elif Wave_generation_mode==PWM_PH_F_C_ICR1     //8
SetBit(TCCR1A,WGM13) ;
ClearBit(TCCR1A,WGM12) ;
ClearBit(TCCR1A,WGM11) ;
ClearBit(TCCR1A,WGM10) ;	
#elif Wave_generation_mode==PWM_PH_F_C_OCR1A  //9
SetBit(TCCR1A,WGM13) ;
ClearBit(TCCR1A,WGM12) ;
ClearBit(TCCR1A,WGM11) ;
SetBit(TCCR1A,WGM10) ;

#elif Wave_generation_mode==PWM_PH_C_ICR1     //10
SetBit(TCCR1A,WGM13) ;
ClearBit(TCCR1A,WGM12) ;
SetBit(TCCR1A,WGM11) ;
ClearBit(TCCR1A,WGM10) ;	
#elif Wave_generation_mode==PWM_PH_C_OCR1A  //11
SetBit(TCCR1A,WGM13) ;
ClearBit(TCCR1A,WGM12) ;
SetBit(TCCR1A,WGM11) ;
SetBit(TCCR1A,WGM10) ;
#elif Wave_generation_mode==CTC_ICR1	   //12
SetBit(TCCR1A,WGM13) ;
SetBit(TCCR1A,WGM12) ;
ClearBit(TCCR1A,WGM11) ;
ClearBit(TCCR1A,WGM10) ;
/*#elif Wave_generation_mode==              //13
SetBit(TCCR1A,WGM13) ;
SetBit(TCCR1A,WGM12) ;        RESERVED
ClearBit(TCCR1A,WGM11) ;
SetBit(TCCR1A,WGM10) ;*/
#elif Wave_generation_mode==FAST_PWM_ICR1     //14
SetBit(TCCR1A,WGM13) ;
SetBit(TCCR1A,WGM12) ;
SetBit(TCCR1A,WGM11) ;
ClearBit(TCCR1A,WGM10) ;	
#elif Wave_generation_mode==FAST_PWM_OCR1A   //15
SetBit(TCCR1A,WGM13) ;
SetBit(TCCR1A,WGM12) ;
SetBit(TCCR1A,WGM11) ;
SetBit(TCCR1A,WGM10) ;

#endif

 
#if Compare_Output_Mode_A==Disconnected  
ClearBit(TCCR1A,COM1A1); 
ClearBit(TCCR1A,COM1A0); 
#elif Compare_Output_Mode_A==Toggle_mode_9_14 
ClearBit(TCCR1A,COM1A1); 
SetBit(TCCR1A,COM1A0); 
#elif Compare_Output_Mode_A==Non_Inverted_PWM  
SetBit(TCCR1A,COM1A1); 
ClearBit(TCCR1A,COM1A0); 
#elif Compare_Output_Mode_A==Inverted_PWM   
SetBit(TCCR1A,COM1A1); 
SetBit(TCCR1A,COM1A0); 
#endif

#if Compare_Output_Mode_B==Disconnected  
ClearBit(TCCR1A,COM1B1); 
ClearBit(TCCR1A,COM1B0); 
#elif Compare_Output_Mode_A==Toggle_mode_9_14 
ClearBit(TCCR1A,COM1B1); 
SetBit(TCCR1A,COM1B0); 
#elif Compare_Output_Mode_A==Non_Inverted_PWM  
SetBit(TCCR1A,COM1B1); 
ClearBit(TCCR1A,COM1B0); 
#elif Compare_Output_Mode_A==Inverted_PWM   
SetBit(TCCR1A,COM1B1); 
SetBit(TCCR1A,COM1B0); 
#endif


#if Clock_Selector == No_Clock //stop timer
 ClearBit(TCCR1B,CS12); 
 ClearBit(TCCR1B,CS11); 
 ClearBit(TCCR1B,CS10) ;
#elif Clock_Selector == No_prescaling
 ClearBit(TCCR1B,CS12); 
 ClearBit(TCCR1B,CS11); 
   SetBit(TCCR1B,CS10) ;
 
 #elif Clock_Selector == CLK_8
 ClearBit(TCCR1B,CS12); 
   SetBit(TCCR1B,CS11); 
 ClearBit(TCCR1B,CS10); 
 
 #elif Clock_Selector== CLK_64
 ClearBit(TCCR1B,CS12); 
   SetBit(TCCR1B,CS11); 
   SetBit(TCCR1B,CS10); 
 
 #elif Clock_Selector== CLK_256
   SetBit(TCCR1B,CS12); 
 ClearBit(TCCR1B,CS11); 
 ClearBit(TCCR1B,CS10); 

#elif Clock_Selector ==CLK_1024
   SetBit(TCCR1B,CS12); 
 ClearBit(TCCR1B,CS11); 
   SetBit(TCCR1B,CS10) ; 

 #elif Clock_Selector ==Ext_T0_F
   SetBit(TCCR1B,CS12);
   SetBit(TCCR1B,CS11); 
 ClearBit(TCCR1B,CS10); 
 
 #elif Clock_Selector == Ext_T0_R
 SetBit(TCCR1B,CS12); 
 SetBit(TCCR1B,CS11) ;
 SetBit(TCCR1B,CS10) ; 
 
 #endif


#if   Force_Compare_Match_A == NO
 ClearBit(TCCR1A,FOC1A);
#elif Force_Compare_Match_A == Yes
 SetBit(TCCR1A,FOC1A);
#endif

#if   Force_Compare_Match_B == NO
 ClearBit(TCCR1A,FOC1B);
#elif Force_Compare_Match_B == Yes
 SetBit(TCCR1A,FOC1B);
#endif


#if INPUT_CAPTURE_NOISE_CANCELLER == NO
 ClearBit(TCCR1B,ICNC1);
#elif INPUT_CAPTURE_NOISE_CANCELLER == Yes
 SetBit(TCCR1B,ICNC1);
#endif

#if INPUT_CAPTURE_EDGE_SELECT == FALLING_EDGE
 ClearBit(TCCR1B,ICES1);
#elif INPUT_CAPTURE_EDGE_SELECT == RISING_EDGE
 SetBit(TCCR1B,ICES1);
#endif


}

void Load_Comp_Reg_A( u16 Comp_value){
	
OCR1AH=Comp_value>> 8 ;
OCR1AL=Comp_value;
	
	
}
void Load_Comp_Reg_B( u16 Comp_value){
	
OCR1BH=Comp_value>> 8 ;
OCR1BL=Comp_value;
	
	
}
  
void F_PWM0_AnalogWrite_A( u8 D_C_Percent){
	
	u8 x_comp_value; 
	
	x_comp_value=((256*D_C_Percent)/100)-1;
	
	Load_Comp_Reg_A(x_comp_value);
	
	
}//Non_Inverted mode




void Ph_C_PWM0_AnalogWrite_A( u8 D_C_Percent){  //in Non_inverted Phase correct mode mode only
	
	u8 x_comp_value;
	 
	x_comp_value=(255* D_C_Percent)/100;
	
	 Load_Comp_Reg_A(x_comp_value);
	
}



void Ph_C_PWM0_AnalogWrite_B( u8 D_C_Percent){  //in Non_inverted Phase correct mode mode only
	
	u8 x_comp_value;
	
	x_comp_value=(255* D_C_Percent)/100;
	
	Load_Comp_Reg_B(x_comp_value);
	
}







void Timer1_Reset(){
	
	ClearPort(TCNT1H);
	ClearPort(TCNT1L);
}
  
 void Timer1_OC_FlagA_Reset(){
	  

	   SetBit(TIFR,OCF1A) ;
	  
  }
 void Timer1_OC_FlagB_Reset(){
	  

	   SetBit(TIFR,OCF1B) ;
	  
  }
  
  void Timer1_OV_Flag_Reset(){
	  

	   SetBit(TIFR,TOV1) ;
	  
  }
  
  
  
  
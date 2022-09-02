/***********************************************/
/****By:mohamed salah***************************/
/****TIMER2_PROGRAM.H   ***************************/
/****23/8/2022 3:20pm **************/ 
  #include "STD_types.h"
  #include "Bit_math.h"
  #include "STD_types.h"
  #include "TIMER2_private.h"         
  #include "TIMER2_interface.h"
  #include "TIMER2_config.h"        
  
  
   
  
void Timer2_Init(){
	
#if Wave_generation_mode2==Normal 
ClearBit(TCCR2,WGM20) ;
ClearBit(TCCR2,WGM21) ;	
#elif Wave_generation_mode2==CTC
ClearBit(TCCR2,WGM20) ;
  SetBit(TCCR2,WGM21) 	;
#elif Wave_generation_mode2== PWM_Phase_Correct	
  SetBit(TCCR2,WGM20) ;
ClearBit(TCCR2,WGM21) ;	
#elif Wave_generation_mode2== Fast_PWM
SetBit(TCCR2,WGM20) ;
SetBit(TCCR2,WGM21) ;	
#endif
 
#if Compare_Output_Mode2==Disconnected  
ClearBit(TCCR2,COM21); 
ClearBit(TCCR2,COM20); 
#elif Compare_Output_Mode2==Non_Inverted  
  SetBit(TCCR2,COM21); 
ClearBit(TCCR2,COM20); 
#elif Compare_Output_Mode2==Inverted_PWM  
SetBit(TCCR2,COM21); 
SetBit(TCCR2,COM20); 
#endif
 
#if Clock_Selector2 == No_Clock //stop timer
 ClearBit(TCCR2,CS22); 
 ClearBit(TCCR2,CS21); 
 ClearBit(TCCR2,CS20) ;
#elif Clock_Selector2 == No_prescaling
 ClearBit(TCCR2,CS22); 
 ClearBit(TCCR2,CS21); 
   SetBit(TCCR2,CS20) ;
 
 #elif Clock_Selector2 == CLK_8
 ClearBit(TCCR2,CS22); 
   SetBit(TCCR2,CS21); 
 ClearBit(TCCR2,CS20); 
 
 #elif Clock_Selector== CLK_64
 ClearBit(TCCR2,CS22); 
   SetBit(TCCR2,CS21); 
   SetBit(TCCR2,CS20); 
 
 #elif Clock_Selector2== CLK_256
   SetBit(TCCR2,CS22); 
 ClearBit(TCCR2,CS21); 
 ClearBit(TCCR2,CS20); 

#elif Clock_Selector2 ==CLK_1024
   SetBit(TCCR2,CS22); 
 ClearBit(TCCR2,CS21); 
   SetBit(TCCR2,CS20) ; 

 #elif Clock_Selector2 ==Ext_T0_F
   SetBit(TCCR2,CS22);
   SetBit(TCCR2,CS21); 
 ClearBit(TCCR2,CS20); 
 
 #elif Clock_Selector2 == Ext_T0_R
 SetBit(TCCR2,CS22); 
 SetBit(TCCR2,CS21) ;
 SetBit(TCCR2,CS20) ; 
 
 #endif


#if Force_Compare_Match2 == NO
     ClearBit(TCCR2,FOC2);
#elif Force_Compare_Match2==  Yes
     SetBit(TCCR2,FOC2);
 #endif


}

void Load_Comp_Reg2(u8 Comp_value){
	
OCR2=Comp_value	;
	
	
}

  
void F_PWM2_AnalogWrite( u8 D_C_Percent){ //Non_Inverted mode-- fast PWM
	
	u8 x_comp_value; 
	
	x_comp_value=((256*D_C_Percent)/100)-1;
	
	Load_Comp_Reg2(x_comp_value);
	
	
}//Non_Inverted mode

void F_PWM2_Servo( u8 Servo_Angle){ 
	
	u8 x_Duty_Cycle; 
	
	x_Duty_Cycle=((Servo_Angle/1800)+0.02)*100;
	
	F_PWM2_AnalogWrite(x_Duty_Cycle);
	
	
}//Non_Inverted mode


void Ph_C_PWM2_AnalogWrite( u8 D_C_Percent){  //in Non_inverted Phase correct mode  only
	
	u8 x_comp_value;
	 
	x_comp_value=(255* D_C_Percent)/100;
	
	 Load_Comp_Reg2(x_comp_value);
	
}



void Timer2_Reset(){
	
	ClearPort(TCNT2);
	
}
  
 void Timer2_Ov_Flag_Reset(){
	  

	   SetBit(TIFR,TOIE2) ;
	  
  }

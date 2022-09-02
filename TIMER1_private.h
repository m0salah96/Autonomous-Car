/***********************************************/
/****By:mohamed salah***************************/
/****TIMER1_PRIVATE.H   ***************************/
/****27/8/2022 3:20pm **************/ 

#ifndef TIMER1_PRIVATE_H_
#define TIMER1_PRIVATE_H_

//registers 
#define  TCCR1A *((volatile u8*)0x4F)  //CONTROL REGISTER A
#define  TCCR1B *((volatile u8*)0x4E)  //CONTROL REGISTER B

#define  TCNT1H *((volatile u8*)0x4D)   //TIMER COUNTER REGISTER
#define  TCNT1L *((volatile u8*)0x4C)   //TIMER COUNTER REGISTER

#define  OCR1AH  *((volatile u8*)0x4B)  //OUTPUT COMPARE REGISTER
#define  OCR1AL  *((volatile u8*)0x4A)  //OUTPUT COMPARE REGISTER
#define  OCR1BH  *((volatile u8*)0x49)  //OUTPUT COMPARE REGISTER
#define  OCR1BL  *((volatile u8*)0x48)  //OUTPUT COMPARE REGISTER

#define  ICR1H  *((volatile u8*)0x47)   //INPUT CAPTURE REGISTER TIMER 1  
#define  ICR1L  *((volatile u8*)0x46)   //INPUT CAPTURE REGISTER TIMER 1


#define  TIFR  *((volatile u8*)0x58)    // Timer/Counter INTERRUPT FLAG REGISTRE 
#define  TIMSK *((volatile u8*)0x59)    // TIMER/COUNTER INTERRUPT REGISTRE

//register bits TCCR1A
#define  COM1A1    7 //COMPARE OUTPUT MODE FOR CHANNEL A
#define  COM1A0    6 //COMPARE OUTPUT MODE FOR CHANNEL A
#define  COM1B1    5 //COMPARE OUTPUT MODE FOR CHANNEL B
#define  COM1B0    4 //COMPARE OUTPUT MODE FOR CHANNEL B
#define  FOC1A     3 //FORCE OUTPUT COMPARE FOR CHANNEL A
#define  FOC1B     2 //FORCE OUTPUT COMPARE FOR CHANNEL B
#define  WGM11     1 //TIMER 1 MODE
#define  WGM10     0 //TIMER 1 MODE

//register bits TCCR1B
#define  ICNC1    7 //INPUT CAPTURE NOISE CANCELER
#define  ICES1    6 //INPUT CAPTURE EDGE SELECT
//RESERVED BIT
#define  WGM13    4 //TIMER 1 MODE 
#define  WGM12    3 //TIMER 1 MODE 
#define  CS12     2 //TIMER 1 CLOCK SELECTOR
#define  CS11     1 //TIMER 1 CLOCK SELECTOR
#define  CS10     0 //TIMER 1 CLOCK SELECTOR

////register bits TIMSK
#define  OCIE2   7 //OUTPUT COMPARE FLAG 0
#define  TOIE2   6 //TIMER/COUNTER2 Overflow Flag
#define  TICIE1  5 //
#define  OCIE1A  4 //
#define  OCIE1B  3 //
#define  TOIE1   2 //TIMER/COUNTER1 Overflow Flag
#define  OCIE0   1 //OUTPUT COMPARE FLAG 0
#define  TOIE0   0 // TIMER/COUNTER0 Overflow Flag
////register bits TIFR
#define  OCF2   7 //OUTPUT COMPARE FLAG 0
#define  TOV2   6 //TIMER/COUNTER2 Overflow Flag
#define  ICF1   5 //Input Capture flag
#define  OCF1A  4 //TIMER 1 output compare A match flag
#define  OCF1B  3 //TIMER 1 output compare B match flag
#define  TOV1   2 //TIMER/COUNTER1 Overflow Flag
#define  OCF0   1 //OUTPUT COMPARE FLAG 0
#define  TOV0   0 // TIMER/COUNTER0 Overflow Flag


//Wave_generation_mode
	
#define   Normal                   10          //mode 0
#define   PWM_Ph_C_8BIT            20          //mode 1
#define   PWM_Ph_C_9BIT            30          //mode 2
#define   PWM_Ph_C_10BIT           40          //mode 3
#define   CTC_OCR1A                50          //mode 4
#define   Fast_PWM_8BIT	           60          //mode 5
#define   Fast_PWM_9BIT	           70          //mode 6
#define   Fast_PWM_10BIT	       80          //mode 7
#define   PWM_PH_F_C_ICR1          90          //mode 8
#define   PWM_PH_F_C_OCR1A         100         //mode 9
#define   PWM_PH_C_ICR1            110         //mode 10
#define   PWM_PH_C_OCR1A           120         //mode 11
#define   CTC_ICR1	               130         //mode 12
#define   FAST_PWM_ICR1            140         //mode 14
#define   FAST_PWM_OCR1A           150         //mode 15
				   
	
//Compare_Output_Mode	

#define    Disconnected            	160
#define    Toggle_mode_9_14			170
#define    Non_Inverted_PWM			180
#define    Inverted_PWM				190


//clock_selector
#define No_prescaling        80
#define No_Clock			 90
#define CLK_8				 100
#define CLK_64				 110
#define CLK_256				 120
#define CLK_1024			 130
#define Ext_T0_F			 140
#define Ext_T0_R			 150

//{FALLING_EDGE,,,RISING_EDGE}

#define    FALLING_EDGE			200
#define    RISING_EDGE			210

#define    Yes			        220
#define    No			        230














#endif
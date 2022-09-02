/***********************************************/
/****By:mohamed salah***************************/
/****TIMER2_PRIVATE.H   ***************************/
/****23/8/2022 3:20pm **************/ 

#ifndef TIMER2_PRIVATE_H_
#define TIMER2_PRIVATE_H_
 
//registers 
#define  TCCR2 *((volatile u8*)0x45)  //TIMER/COUNTER control REGISTER
#define  TCNT2 *((volatile u8*)0x44)  //TIMER COUNTER REGISTER
#define  OCR2  *((volatile u8*)0x43)  //OUTPUT COMPARE REGISTER
#define  TIFR  *((volatile u8*)0x58)  // Timer/Counter INTERRUPT FLAG REGISTRE 
#define  TIMSK *((volatile u8*)0x59)  // TIMER/COUNTER INTERRUPT REGISTRE
//register bits TCCR2
#define  FOC2    7 //forced output compare
#define  WGM20  6 //WAVE generation mode
#define  COM21  5 //compare match output
#define  COM20  4 //compare match output
#define  WGM21  3 //WAVE generation mode
#define  CS22   2 //clock select bits
#define  CS21   1 //clock select bits
#define  CS20   0 //clock select bits
////register bits TIFR
#define  OCIE2   7 //OUTPUT COMPARE FLAG 0
#define  TOIE2   6 //TIMER/COUNTER2 Overflow Flag
#define  TICIE1  5 //
#define  OCIE1A  4 //
#define  OCIE1B  3 //
#define  TOIE1   2 //TIMER/COUNTER1 Overflow Flag
#define  OCIE0   1 //OUTPUT COMPARE FLAG 0
#define  TOIE0   0 // TIMER/COUNTER0 Overflow Flag
////register bits TIMSK
#define  OCF2   7 //
#define  TOV2   6 //
#define  ICF1   5 //
#define  OCF1A  4 //
#define  OCF1B  3 //
#define  TOV1   2 //
#define  OCF0   1 //
#define  TOV0   0 //


#define Normal               10
#define CTC					 20
#define PWM_Phase_Correct	 30
#define Fast_PWM			 40

#define Disconnected         50
#define Non_Inverted		 60
#define Inverted_PWM		 70

#define No_prescaling        80
#define No_Clock			 90
#define CLK_8				 100
#define CLK_64				 110
#define CLK_256				 120
#define CLK_1024			 130
#define Ext_T0_F			 140
#define Ext_T0_R			 150

#define Yes             160
#define No              170

















#endif
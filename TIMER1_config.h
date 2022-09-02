
/***********************************************/
/****By:mohamed salah***************************/
/****TIMER1_CONFIGURATION.H   ***************************/
/****2/8/2022 3:20pm **************/ 

#ifndef TIMER_CONFIGURATION_H_
#define TIMER_CONFIGURATION_H_



#define Wave_generation_mode PWM_Ph_C_8BIT
//{Normal,,,PWM_Ph_C_8BIT,,,PWM_Ph_C_9BIT,,,PWM_Ph_C_10BIT,,,CTC_OCR1A,,,Fast_PWM_8BIT,,,Fast_PWM_9BIT,,,Fast_PWM_10BIT
//PWM_PH_F_C_ICR1,,,PWM_PH_F_C_OCR1A,,,PWM_PH_C_ICR1,,,PWM_PH_C_0CR1A,,,CTC_ICR1,,,FAST_PWM_ICR1,,,FAST_PWM_OCR1A}

#define Compare_Output_Mode_A Non_Inverted_PWM
//{Disconnected,,,Toggle_mode_9_14,,,Non_Inverted_PWM,,,Inverted_PWM}
 
#define Compare_Output_Mode_B Non_Inverted_PWM 
//{Disconnected,,,Toggle_mode_9_14,,,Non_Inverted_PWM,,,Inverted_PWM}


#define Clock_Selector No_prescaling
//{No_prescaling,No_Clock,CLK/8,Clk/64,CLK/64,CLK/256,CLK/1024,Ext_T0_F,Ext_T0_R}


#define Force_Compare_Match_A  NO
//{Yes,No} 

#define Force_Compare_Match_B  NO
//{Yes,No} 

#define INPUT_CAPTURE_NOISE_CANCELLER  NO
//{Yes,No} 

#define INPUT_CAPTURE_EDGE_SELECT  FALLING_EDGE
//{FALLING_EDGE,,,RISING_EDGE}

#endif
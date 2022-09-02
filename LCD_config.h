/*****************************************/
/*	Author : mohamed salah				 */
/*	Date   : 6-24-2022   		   		 */
/*	Version: 0.1				         */
/*	File   : LCD_config.h		     */
/*****************************************/



#ifndef _LCD_CONFIGURATION_H_
#define _LCD_CONFIGURATION_H_


#define LCD_U8_Mode LCD_4Bit_mode 
// options (LCD_4Bit_mode,LCD_8Bit_mode)

#define LCD_u8_RS_PORT    DIO_U8_PORTB
#define LCD_u8_RW_PORT    DIO_U8_PORTB
#define LCD_u8_E_PORT     DIO_U8_PORTB

#define LCD_u8_RS_PIN    DIO_U8_Pin1
#define LCD_u8_RW_PIN    DIO_U8_Pin2
#define LCD_u8_E_PIN     DIO_U8_Pin3

/* assign fo 8 bit modes DIO_U8_Pin
#define LCD_u8_D0_PORT     DIO_u8_PORT*
#define LCD_u8_D1_PORT     DIO_u8_PORT*
#define LCD_u8_D2_PORT     DIO_u8_PORT*
#define LCD_u8_D3_PORT     DIO_u8_PORT**/



/* assign fo 8 bit modes
#define LCD_u8_D0_PIN     DIO_u8_PIN*
#define LCD_u8_D1_PIN     DIO_u8_PIN*
#define LCD_u8_D2_PIN     DIO_u8_PIN*
#define LCD_u8_D3_PIN     DIO_u8_PIN* */


#define LCD_u8_Data_PORT  DIO_U8_PORTA
#endif

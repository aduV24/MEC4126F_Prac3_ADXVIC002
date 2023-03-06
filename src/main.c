// Description----------------------------------------------------------------|
/*
 *
 */
// DEFINES AND INCLUDES-------------------------------------------------------|

#define STM32F051												   //COMPULSORY
#include "stm32f0xx.h"											   //COMPULSORY
#include "lcd_stm32f0.h"
#include <stdio.h>

// GLOBAL VARIABLES ----------------------------------------------------------|
struct age_data{
	uint8_t Day;
	uint8_t month;
	uint16_t year;
	uint8_t age;

}my_age;

// FUNCTION DECLARATIONS -----------------------------------------------------|

void main(void);                                                   //COMPULSORY

// MAIN FUNCTION -------------------------------------------------------------|

void main(void)
{
	my_age.Day =24;
	my_age.month = 5;
	my_age.year = 2000;
	my_age.age = 22;
	char str[2]; // Buffer array that stores the string
	init_LCD(); // initialize LED

	while(1)
	{

		for (uint8_t var = 0; var <= my_age.age; var++) {
			delay(65000);
			sprintf(str,"%d",var); //write age into str array
			lcd_putstring(str); // put string on lcd
			delay(65000);
			lcd_command(CLEAR); //clear screen for next number
		}
	}
}

// OTHER FUNCTIONS -----------------------------------------------------------|





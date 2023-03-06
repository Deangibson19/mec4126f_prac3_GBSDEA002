// Description----------------------------------------------------------------|
/*
 * 
 */
// DEFINES AND INCLUDES-------------------------------------------------------|

#define STM32F051 												   //COMPULSORY
#include "stm32f0xx.h"											   //COMPULSORY
#include "lcd_stm32f0.h"
#include <stdio.h>

// GLOBAL VARIABLES ----------------------------------------------------------|

struct age_data
{
	uint8_t day;
	uint8_t month;
	uint32_t year;
	uint8_t age;
};

struct age_data my_age;

// FUNCTION DECLARATIONS -----------------------------------------------------|

void main(void); 													//COMPULSORY
void init_LCD(void);
void lcd_putstring(char * instring);
void delay(unsigned int microseconds);
// MAIN FUNCTION -------------------------------------------------------------|

void main(void)
{

	while(1)
	{

	}
}

// OTHER FUNCTIONS -----------------------------------------------------------|

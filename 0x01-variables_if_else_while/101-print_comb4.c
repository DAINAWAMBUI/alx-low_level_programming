#include <stdio.h>

/**
 * main - print all possibled ifferent combination of three digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ones = '0';
	int tens = '0';
	int hundreds = '0';

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
		for (hundreds = '0'; hundreds <= '9'; hundreds++)
		{
			for (ones = '0'; ones <= '9'; ones++) 
			{
				if (!((ones == tens) || (tens == hundreds) || 
							(tens == ones) || (hundreds == tens))) /*eliminates repetition*/
				{
					putchar(tens);
					putchar(ones);
					putchar(hundreds);
					if (!(ones == '9' && hundreds == '7' && 
								tens == '8'))/*adds commas and spaces*/
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	} 
	putchar('\n');
	return (0);
	}	

#include "main.h"
/**
 *jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int min;
	int hr;

		for (hr = 0; hr <= 23;)
		{
			for (min = 0; min <= 59; min++)
			{
				_putchar('0' + hr / 10);
            			_putchar('0' + hr % 10);
           			_putchar(':');
            			_putchar('0' + min / 10);
            			_putchar('0' + min % 10);
            			_putchar('\n');
			}
		}	
}

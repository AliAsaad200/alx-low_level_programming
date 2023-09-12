#include "main.h"
/**
 *print_last_digit - Entry point
 *@n: The loweer to checked
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int min;
	int hr;
	for (hr = 00;hr <=23 ; hr++)
	{
		_putchar(hr + ',');
		for (min = 00; min <=59; min++)
		{
			_putchar(min);
			_putchar('\n');
		}
	}
}

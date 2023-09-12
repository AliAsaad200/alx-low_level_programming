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

	for (hr = 0; hr <= 23 ; hr++)
	{
		_putchar(hr);
		_putchar(',');
		for (min = 0; min <= 59; min++)
		{
			_putchar(min);
			
		}
		_putchar('\n');
	}
}

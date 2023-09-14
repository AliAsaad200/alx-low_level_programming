#include "main.h"
/**
 * more_numbers - check the code.
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i;
	int l;

	for (l = 0; l <= 10; l++)
	{
		for (i = 0; i <= 14; i++)
	{
		if (i > 9)
		{
			_putchar(i / 10 + '0');
		}
		_putchar(i % 10 + '0');
	}
	_putchar ('\n');
	}
}


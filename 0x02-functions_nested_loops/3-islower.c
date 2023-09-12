#include "main.h"
/**
 *int _islower(int c) - Entry point
 *
 * Return: Always 0 (Success)
 */
int _islower(int C)
{
	int c;

	if (c >= "a" && c <= 'z')
	{
		_putchar(C + '0');
	}
	else
	{
		_putchar(c + '1');
	}
	_putchar('\n');
	return (0);
}

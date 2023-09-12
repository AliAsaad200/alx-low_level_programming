#include "main.h"
/**
 *int_abs - Entry point
 *@n: The loweer to checked
 * Return: Always 0 (Success)
 */
int int_abs(int n)
{
	if (n < 0)
	{
		_putchar(n * -1);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar(n);
	}
	return (0);
}

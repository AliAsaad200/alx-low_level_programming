#include "main.h"
/**
 *print_number - check the code.
 *@n: The loweer to checked
 * Return: Always 0.
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	if (n > 9)
	{
		print_number(n / 10);
	}
	_putchar('0' + (n % 10));
}

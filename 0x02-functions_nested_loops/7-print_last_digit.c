#include "main.h"
/**
 *print_last_digit - Entry point
 *@n: The loweer to checked
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int c;

	if (n >=  0)
	{
		c = n % 10;
		_putchar(c + '0');
		return (c);
	}
	else 
	{
		c = -1 * n % 10;
		_putchar(c + '0');
		return (c);
	}
}	

#include "main.h"
/**
 *print_last_digit - Entry point
 *@n: The loweer to checked
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	if (n >=  0)
	{
		_putchar(n % 10 + "0");
		return (n);
	}
	else 
	{
		_putchar(-n + "0");
		return (n);
	}
}
	

#include "main.h"
/**
 * print_line - check the code.
 * @n: The loweer to checked
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (i = 0; i < n; i++)
			{
				_putchar('_');
			}
		}
}

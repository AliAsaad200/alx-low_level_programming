#include "main.h"
/**
 * print_triangle - check the code.
 * @size: The loweer to checked
 * Return: Always 0.
 */
void print_triangle(int size)
{
	 int i;
	 int j;

	if (size <= 0)
	{
		_putchar('\n');
		}
		else
		{
			for (i = 1; i <= 5; i++)
			{
				for (j = 1; j <= 5 - i; j++)
				{
					_putchar(32);
				}
				for (j = 1; j <= i; j++)
				{
					_putchar('#');
				}
				_putchar('\n');
			}
		}
}

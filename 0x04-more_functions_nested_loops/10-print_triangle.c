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
		putchar('\n');
		}
		else
		{
			for (i = 1; i <= 5; i++)
			{
				for (j = 1; j <= 5 - i; j++)
				{
					putchar(32);
				}
				for (j = 0; j <= i; j++)
				{
					putchar('#');
				}
				putchar('\n');
			}
		}
}

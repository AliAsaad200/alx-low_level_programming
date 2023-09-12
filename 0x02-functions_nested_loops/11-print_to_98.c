#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - Entry point
 *@n: The loweer to checked
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = 0; n <= 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (n = 0; n >= 98; n--)
		{
			printf("%d, ", n);
		}
	}
}

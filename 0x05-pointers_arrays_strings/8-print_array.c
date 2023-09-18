#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_array - integer is positive or negative
* @a: first integer
* @n: first integer
* Return: 0
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i != n)
		{
			printf("%d, ", a[i]);
		}
	}
	putchar('\n');
}

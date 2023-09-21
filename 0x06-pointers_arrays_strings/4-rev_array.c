#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* reverse_array - integer is positive or negative
* @a: first integer
* @n: first integer
* Return: 0
*/

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0, i < n , i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d" , a[i]);
	}
	printf("\n");
}

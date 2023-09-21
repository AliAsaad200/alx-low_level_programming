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
	int len = sizeof(*a) / sizeof(a[0]);
	int i;
	char temp;

	for (i = 0, n = len - 1; i < n; i++, n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
	printf("\n");
}

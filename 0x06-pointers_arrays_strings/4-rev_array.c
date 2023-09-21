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
	int len = n - 1;
	int i, j;
	int temp;

	for (i = 0, j = len; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}

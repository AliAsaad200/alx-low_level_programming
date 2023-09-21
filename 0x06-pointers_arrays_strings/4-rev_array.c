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
	int len = strlen(a);
	int i;
	char temp;

	for (i = 0, j = len - 1; i < n; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}

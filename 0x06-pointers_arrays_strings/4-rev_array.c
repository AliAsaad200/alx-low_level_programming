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
	char temp;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}


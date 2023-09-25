#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_diagsums - integer is positive or negative
* @a: first integer
* @size: first integer
* Return: 0
*/

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;
	int j;

	for (i = 0, j = 0; i < size; i++, j++)
	{
		sum1 += *a[i][j];
	}
	for (i = 0, j = 2; i < size; i++, j--)
	{
		sum2 += *a[i][j];
	}			
	printf("%d, %d\n", sum1, sum2);
}

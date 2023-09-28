#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
/**
* _sqrt_recursion - integer is positive or negative
* @n: first integer
* Return: 0
*/
int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (x * x != n)
	{
		x = x + 1;
		printf("%d", x);
		return (0);
	}
}

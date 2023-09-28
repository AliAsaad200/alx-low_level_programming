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
	int res;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return n;
	}
	else
	{
		res = (res + n / res) / 2;
		return (n * _pow_recursion(n - 1));
	}
}

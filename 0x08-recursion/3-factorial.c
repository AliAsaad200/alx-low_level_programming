#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* factorial - integer is positive or negative
* @n: first integer
* Return: 0
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

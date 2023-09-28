#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
/**
* _pow_recursion - integer is positive or negative
* @x: first integer
* @y: first integer
* Return: 0
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		printf("%d", pow(x, y))
		return (0);
	}
}

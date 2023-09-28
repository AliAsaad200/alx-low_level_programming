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
	int m;

	if (y < 0)
	{
		return (-1);
	}
	else
	{
		 m = _pow_recursion(x * y);
		printf("%d", m);
		return(0);
	}
}

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
	int m = 1;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		m = m*x;
		printf("%d", m);
		return(_pow_recursion(x , y - 1));
	}
}

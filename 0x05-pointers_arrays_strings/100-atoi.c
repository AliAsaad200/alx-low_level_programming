#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _atoi - integer is positive or negative
* @s: first integer
* Return: 0
*/
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	if (result == 0 && (s[i] < '0' || s[i] > '9'))
	{
		return (0);
	}
	return (sign * result);
}

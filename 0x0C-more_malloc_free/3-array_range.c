#include "main.h"
/**
* array_range - integer is positive or negative
* @min: first integer
* @max: first integer
* Return: 0
**/
int *array_range(int min, int max)
{
	char *p;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * max);
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
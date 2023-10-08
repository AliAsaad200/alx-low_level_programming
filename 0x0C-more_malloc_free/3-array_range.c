#include "main.h"
/**
* array_range - integer is positive or negative
* @min: first integer
* @max: first integer
* Return: 0
**/
int *array_range(int min, int max)
{
	int *p;
	int i;
	int res;

	if (min > max)
	{
		return (NULL);
	}
	res = max - min + 1;
	p = malloc(sizeof(int) * res);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
    	{
        	*(p + i) = min;
	}
	return (p);
}

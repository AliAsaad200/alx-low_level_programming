#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - integer is positive or negative
* @width: first integer
* @height: first integer
* Return: 0
*/
int **alloc_grid(int width, int height)
{
	int **p;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * height)
	if (p == NULL)
	[
		return (NULL);
	]
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
	}
	return (p);

}

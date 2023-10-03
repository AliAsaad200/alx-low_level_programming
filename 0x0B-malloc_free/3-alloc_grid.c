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
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * height);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
	}
	if (p[i] == NULL)
	{
		for (int j = 0; j < i; j++)
        	{
        		free(p[j]);
        	}
        	free(p);
        	return NULL;
        }
	for (int j = 0; j < width; j++)
	{
		p[i][j] = 0;
	}
	return (p);
}

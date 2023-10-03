#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - integer is positive or negative
* @size: first integer
* @c: first integer
* Return: 0
*/
char *create_array(unsigned int size, char c)
{
	char *f = 0;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);

	}
	else
	{
		f = malloc(size * sizeof(char));
		if (f == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			f[i] = c;
		}
	}
	return (f);
}

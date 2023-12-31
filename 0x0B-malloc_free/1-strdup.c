#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _strdup - integer is positive or negative
* @str: first integer
* Return: 0
*/
char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
	{
		return (NULL);

	}
	dup = malloc(sizeof(char) * strlen(str) + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	strcpy(dup, str);
	return (dup);
}

#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strspn - integer is positive or negative
* @s: first integer
* @accept: first integer
* Return: 0
*/

unsigned int _strspn(char *s, char *accept)
{
	int *value = strchr(s, accept);

	return (value);
}
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strpbrk - integer is positive or negative
* @s: first integer
* @accept: first integer
* Return: 0
*/

char *_strpbrk(char *s, char *accept)
{
	char *value = strpbrk(s, accept);

	return (value);
}

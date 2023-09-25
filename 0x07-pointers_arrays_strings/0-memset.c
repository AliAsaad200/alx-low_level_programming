#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _memset - integer is positive or negative
* @s: first integer
* @b: first integer
* @n: first integer
* Return: 0
*/

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}

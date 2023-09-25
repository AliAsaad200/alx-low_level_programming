#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _memcpy - integer is positive or negative
* @dest: first integer
* @src: first integer
* @n: first integer
* Return: 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}

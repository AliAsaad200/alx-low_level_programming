#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strncat - integer is positive or negative
* @src: first integer
* @dest: first integer
* @n: first integer
* Return: 0
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

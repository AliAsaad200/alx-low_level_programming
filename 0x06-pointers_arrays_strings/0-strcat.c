#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strcat - integer is positive or negative
* @src: first integer
* @dest: first integer
* Return: 0
*/

char *_strcat(char *dest, char *src)
{
	strcat(src , dest);
	return(dest);
}
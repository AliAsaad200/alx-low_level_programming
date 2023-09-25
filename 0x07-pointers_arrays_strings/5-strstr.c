#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strstr - integer is positive or negative
* @haystack: first integer
* @needle: first integer
* Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	char *value = strstr(haystack, needle);

	return (value);
}

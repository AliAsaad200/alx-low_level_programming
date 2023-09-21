#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
* rot13 - integer is positive or negative
* @s: first integer
* Return: 0
*/

char *rot13(char *s)
{
	char NormalAlpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char EncodeAlpha[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; NormalAlpha[j] != '\0'; j++)
		{
			if (s[i] == NormalAlpha[j])
			{
				s[i] = EncodeAlpha[j];
				break;
			}
		}
	}
	return (s);
}

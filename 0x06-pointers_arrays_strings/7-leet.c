#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
* leet - integer is positive or negative
* @s: first integer
* Return: 0
*/

char *leet(char *s)
{
	char letter[] = "aAeEoOtTlL";
	char new[] = "4433007711";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = new[j];
				break;
			}
		}
	}
}

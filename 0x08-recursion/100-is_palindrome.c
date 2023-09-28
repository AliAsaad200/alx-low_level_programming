#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
/**
 * pali - palindrome
 * @s: type char pointer
 * @i: type int
 * @j: type int
 * Return: 0
 */
bool pali(char *s, int i, int j)
{
	if (i >= j)
	{
		return (true);
	}

	if (s[i] != s[j])
	{
		return (false);
	}

	return (pali(s, i + 1, j - 1));
}
/**
 * is_palindrome - function that returns 1 if a palindrome else 0
 * @s: type char pointer
 * Return: 0
 */
int is_palindrome(char *s)
{
	int length;

	length = strlen(s);

	if (length == 0)
	{
		return (1);
	}

	return (pali(s, 0, length - 1) ? 1 : 0);
}

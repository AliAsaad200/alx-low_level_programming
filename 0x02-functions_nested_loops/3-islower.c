#include "main.h"
/**
 *_islower(int c) - Entry point
 *@c: The loweer to checked
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

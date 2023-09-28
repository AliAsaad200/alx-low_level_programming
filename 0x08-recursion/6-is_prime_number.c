#include "main.h"

/**
 * _sqrt - _pow
 * @s: number
 * Return: 0
 */
int _sqrt(int s)
{
	if (s <= 1)
	{
		return (0);
	}
	else if (s % s == 0)
	{
		return (1);
	}
	else if (s % 2 == 0)
	{
		return (0);
	}
	else
	{
		return (_sqrt(s - 1));
	}
}
/**
 * is_prime_number - _pow
 * @n: number
 * Return: 0
 */
int is_prime_number(int n)
{
	return (_sqrt(n));
}

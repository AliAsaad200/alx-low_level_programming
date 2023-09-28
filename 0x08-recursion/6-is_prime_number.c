#include "main.h"

/**
 * _sqrt - _pow
 * @s: number
 * @r: number
 * Return: 0
 */
int _sqrt(int s)
{
	if ( s % 2 == 0)
	{
		return (0);
	}
	else if (s % s == 0 && s / 1 == s)
	{
		return (1);
	}
	else
	{
		return (_sqrt(s - 1));
	}
}
/**
 * _sqrt_recursion - _pow
 * @n: number
 * Return: 0
 */
int is_prime_number(int n)
{
	return (_sqrt(n));
}

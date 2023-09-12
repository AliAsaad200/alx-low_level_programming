#include <stdio.h>
/**
 * main - 50 fibonacci numbers
 *
 * Return: (0)
 */
int main(void)
	{
	int first = 1;
	int second = 1;
	int next = 0;
	int sum = 0;

	while (1)
	{
	next = first + second;

	if (next > 4000000)
	{
		break;
	}
	if (next % 2 == 0)
	{
		sum += next;
	}
	first = second;
	second = next;
	}
	return (0);
}

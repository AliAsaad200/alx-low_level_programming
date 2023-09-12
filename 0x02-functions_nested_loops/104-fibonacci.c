#include <stdio.h>
/**
 * main - 50 fibonacci numbers
 *
 * Return: (0)
 */
int main(void)
{
	long first = 1;
	long second = 2;
	long count = 2;

	printf("%lu, %lu, ", first, second);

	while (count < 98)
	{
	long next = first + second;

	printf("%lu", next);
	if (count < 97)
	{
		printf(", ");
	}
	first = second;
	second = next;
	count++;
	}
	printf("\n");

	return (0);
}

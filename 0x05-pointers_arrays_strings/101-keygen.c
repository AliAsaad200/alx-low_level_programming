#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - test
 * Return: 0
 */
int main(void)
{
	int res;
	char c;

	srand(time(NULL));
	while (res <= 2772)
	{
		c = rand() % 128;
		res += c;
		putchar(c);
	}
	putchar(2772 - res);
	return (0);
}

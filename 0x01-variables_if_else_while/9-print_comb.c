#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alp;

	for (alp = 0; alp < 10 ; alp++)
	{
		putchar(alp + 48);
	if (alp != 9)
	{
	putchar(',');
	putchar(' ');
	}

	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;
	char ALP;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);
	for (ALP = 'A'; ALP <= 'Z'; ALP++)
		putchar(ALP);
	putchar('\n');
	return (0);
}

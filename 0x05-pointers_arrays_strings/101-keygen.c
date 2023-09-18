#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char password[100];
	int i, length;

	srand(time(NULL));
	length = rand() % 9 + 6;
	for (i = 0; i < length; i++)
	{
		int type = rand() % 3;

	if (type == 0)
		password[i] = 'a' + (rand() % 26);
	else if (type == 1)
		password[i] = 'A' + (rand() % 26);
	else
		password[i] = '0' + (rand() % 10);
	}
	password[i] = '\0';
	printf("%s\n", password);
	return (0);
}

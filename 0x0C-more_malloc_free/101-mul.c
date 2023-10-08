#include "main.h"
/**
* _realloc - integer is positive or negative
* @ptr: first integer
* @old_size: first integer
* @new_size: first integer
* Return: 0
**/
int multiply(const char *num1, const char *num2)
{
	int result;
	if (sscanf(num1, "%d", &result) != 1 || sscanf(num2, "%d", &result) != 1)
	{
		return (-1);
	}
	return atoi(num1) * atoi(num2);
}
int main(int argc, char *argv[])
{
	char *num1;
	char *num2;
	int result;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];
	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!isdigit(num1[i]))
		{
        		printf("Error\n");
			return (98);
		}
	}
	for (i = 0; num2[i] != '\0'; i++)
	{
		if (!isdigit(num2[i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	result = multiply(num1, num2);
	if (result == -1)
	{
		printf("Error\n");
		return (98);
	}
	printf("%d\n", result);
	return (0);
}
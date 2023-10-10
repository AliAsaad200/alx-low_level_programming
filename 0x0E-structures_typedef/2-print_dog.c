#include "dog.h"
#include <stdio.h>
/**
* init_dog - integer is positive or negative
* @d: first integer
* @name: first integer
* @age: first integer
* @owner: first integer
* Return: 0
*/
void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	printf("Name : %s\n", d->name != NULL ? d->name : "(nil)");
	
}

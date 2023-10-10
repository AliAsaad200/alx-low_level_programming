#include "dog.h"
#include <stdio.h>
/**
* print_dog - integer is positive or negative
* @d: first integer
* Return: 0
*/
void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	printf("Name : %s\n", d->name != NULL ? d->name : "(nil)");
	if (d->age > 0)
	{
		printf("Age : %f\n", d->age);
	}
	else
	{
		printf("Age : (nil)\n");
	}
	printf("Owner : %s\n", d->owner != NULL ? d->owner : "(nil)");
}

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
	printf("Name : %f\n", d->age < 0 ? d->age : "(nil)");
	printf("Name : %s\n", d->owner != NULL ? d->owner : "(nil)");
}

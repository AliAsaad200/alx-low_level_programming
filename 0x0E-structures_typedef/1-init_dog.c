#include "main.h"
#include "dog.h"
/**
* malloc_checked - integer is positive or negative
* @b: first integer
* Return: 0
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if( d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

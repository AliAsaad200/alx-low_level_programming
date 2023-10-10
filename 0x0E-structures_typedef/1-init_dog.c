#include "dog.h"
/**
* init_dog - integer is positive or negative
* @d: first integer
* @name: first integer
* @age: first integer
* @owner: first integer
* Return: 0
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

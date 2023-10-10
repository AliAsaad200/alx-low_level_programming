#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog and stores a copy of name and owner.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner's name.
 *
 * Return: Pointer to the newly created dog, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	return (NULL);

	new_name = malloc(sizeof(char) * (strlen(name) + 1));
	new_owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (new_name == NULL || new_owner == NULL)
	{
		free(new_dog);
		free(new_name);
		free(new_owner);
		return (NULL);
	}
	strcpy(new_name, name);
	strcpy(new_owner, owner);
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}

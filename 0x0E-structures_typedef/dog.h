#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct.
 * @name: name
 * @age: age
 * @owner: owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
typedef dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */

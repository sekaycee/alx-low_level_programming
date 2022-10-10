#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned int a = 0, b = 0, i;

	for (i = 0; name[i]; i++)
		a++;
	for (i = 0; owner[i]; i++)
		b++;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (0);

	dog->name = malloc(a + 1);
	dog->owner = malloc(b + 1);
	if (!dog->name || !dog->owner)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (0);
	}

	for (i = 0; i < a; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	dog->age = age;

	for (i = 0; i < b; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	return (dog);
}


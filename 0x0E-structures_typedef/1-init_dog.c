/**
 * init_dog - initialize a variable of type struct dog
 * @d: dog data type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (!d)
		return (0);
	d->name = name;
	d->age = age;
	d->owner = owner;
}


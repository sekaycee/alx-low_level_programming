#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog data structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog {
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef of struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);

#endif


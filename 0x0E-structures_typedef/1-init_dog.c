#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type `struct dog`
 * @d: struct dog
 * @name: character string
 * @age: float type
 * @owner: character string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}

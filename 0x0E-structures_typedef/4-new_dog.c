#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog
 * @name: character string
 * @age: float type
 * @owner: character string
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *doge;
	char *namej, *ownerj;
	int i = 0, j = 0, k;

	doge = malloc(sizeof(struct dog));
	if (doge == NULL)
		return (NULL);
	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	namej = malloc(sizeof(char) * i + 1);
	if (namej == NULL)
	{
		free(doge);
		return (NULL);
	}
	ownerj = malloc(sizeof(char) * j + 1);
	if (ownerj == NULL)
	{
		free(namej);
		free(doge);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		namej[k] = name[k];
	for (k = 0; k <= j; k++)
		ownerj[k] = owner[k];

	doge->name = namej;
	doge->age = age;
	doge->owner = ownerj;

	return (doge);
}

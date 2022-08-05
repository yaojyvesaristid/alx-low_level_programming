#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure definition of a dog
 * @name: character string
 * @age: float type
 * @owner: character string
 * Description: Define a new struct dog with
 * the following parameters name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

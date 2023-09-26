#include "dog.h"

/**
* init_dog - init a variable type dog
* @d: the dog identification
* @name: the name of the dog
* @age: the age of the dog
* @owner: the name of te owner
* of the dog
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

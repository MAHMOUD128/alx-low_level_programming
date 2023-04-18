#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - initialize a dog var
  * @d: pointer to struct dog var
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != (void *)'\0')
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

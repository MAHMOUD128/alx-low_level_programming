#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - frees dogs
  * @d: pointer to dog
  */
void free_dog(dog_t *d)
{
	if (d != (void *)'\0')
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

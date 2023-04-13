#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocates memory using malloc
  * @b:size
  *
  * Return: pointer to allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == (void *)'\0')
	{
		exit(98);
	}
	return (ptr);
}

#include "main.h"
#include <stdlib.h>

/**
  * _realloc - reallocates a memory
  * @ptr: pointer to memory
  * @old_size: size of memory
  * @new_size: size of memory to be allocated
  *
  * Return: ptr
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *ptrcpy = ptr;
	unsigned int i;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0)
	{
		if (ptr != (void *)'\0')
		{
			free(ptr);
			return ((void *)'\0');
		}
	}
	new_ptr = malloc(new_size);
	if (new_ptr == (void *)'\0')
	{
		return ((void *)'\0');
	}
	if (ptr == (void *)'\0')
	{
		return (new_ptr);
	}
	for (i = 0; i < (old_size < new_size ? old_size : new_size); i++)
	{
		new_ptr[i] = ptrcpy[i];
	}
	free(ptr);
	return (new_ptr);
}

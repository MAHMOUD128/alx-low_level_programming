#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array
  * @nmemb: num of members
  * @size: size of a member
  *
  * Return: pointer to allocated memory, NULL if it fails or arg = 0
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return ((void *)'\0');
	mem = malloc(nmemb * size);
	if (mem == (void *)'\0')
		return ((void *)'\0');
	for (i = 0; i < nmemb * size; i++)
	{
		mem[i] = 0;
	}
	return (mem);
}

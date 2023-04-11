#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates array of chars initialized with a char
  * @size: size of array
  * @c: initialization
  *
  * Return: pointer to array or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	if (size)
	{
		char *arr = (char *)malloc(size * sizeof(char)), *arrcpy = arr;

		while (arr != (void *)'\0' && size--)
		{
			*arrcpy = c;
			arrcpy++;
		}
		return (arr);
	}
	else
	{
		return ((void *)'\0');
	}
}

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
	char *array = (char *)malloc(size * sizeof(char));
    	if (array == NULL)
        	return NULL;
    	for (unsigned int i = 0; i < size; i++)
        	array[i] = c;
    	return array;
}

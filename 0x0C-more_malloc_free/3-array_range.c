#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates array of int
  * @min: start value
  * @max: end value
  *
  * Return: pointer to array
  */
int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return ((void *)'\0');
	array = malloc((max - min + 1) * sizeof(int));
	if (array == (void *)'\0')
		return ((void *)'\0');
	for (i = 0; i < max - min + 1; i++)
	{
		array[i] = min + i;
	}
	return (array);
}

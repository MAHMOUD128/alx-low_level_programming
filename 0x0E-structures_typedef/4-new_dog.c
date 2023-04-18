#include <stdlib.h>
#include "dog.h"

/**
  * _strdup - allocates a new space for a cpy of str
  * @str: str to be copied
  *
  * Return: pointer to new space
  */
char *_strdup(char *str)
{
	if (str != (void *)'\0')
	{
		char *strcpy = str, *strdup, *strdup2;
		int len = 1;

		while (*strcpy != '\0')
		{
			len++;
			strcpy++;
		}
		strdup = (char *)malloc(len * sizeof(char));
		strdup2 = strdup;
		strcpy = str;
		while (strdup != (void *)'\0' && len--)
		{
			*strdup2 = *strcpy;
			strcpy++;
			strdup2++;
		}
		return (strdup);
	}
	else
	{
		return (str);
	}
}

/**
  * new_dog - creates a new dog
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  *
  * Return: pointer to new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d != (void *)'\0')
	{
		name = _strdup(name);
		owner = _strdup(owner);
		if (name && owner)
		{
			d->name = name;
			d->age = age;
			d->owner = owner;
		}
		else
		{
			free(d);
			free(name);
			free(owner);
			return ((void *)'\0');
		}
	}
	return (d);
}

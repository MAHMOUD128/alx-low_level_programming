#include "main.h"

/**
  * _strlen - computes len of a string
  * @s: string to be checked
  *
  * Return: len of s
  */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}

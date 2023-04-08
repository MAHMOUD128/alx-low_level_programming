#include "main.h"

/**
  * _strpbrk - searches a str for any of a set of bytes
  * @s: str
  * @accept: set of bytes
  *
  * Return: pointer to byte matches one from accept, or NULL if no such byte
  */
char *_strpbrk(char *s, char *accept)
{
	char *acceptcpy = accept;

	while (*s != '\0')
	{
		acceptcpy = accept;
		while (*acceptcpy != '\0')
		{
			if (*s == *acceptcpy)
			{
				return (s);
			}
			acceptcpy++;
		}
		s++;
	}
	return ((void *)'\0');
}

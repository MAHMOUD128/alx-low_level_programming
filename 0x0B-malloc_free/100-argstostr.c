#include "main.h"
#include <stdlib.h>

/**
  * _strlen - computes len of str
  * @s: str
  *
  * Return: len of str
  */
int _strlen(char *s)
{
	char *scpy = s;
	int len = 0;

	if (s != (void *)'\0')
	{
		while (*scpy != '\0')
		{
			len++;
			scpy++;
		}
		len++;
	}
	return (len);
}

/**
  * argstostr - concats program args
  * @ac: num of args
  * @av: pointer to pointer to char
  *
  * Return: pointer to str, NULL if fails
  */
char *argstostr(int ac, char **av)
{
	if (ac > 0 && av != (void *)'\0')
	{
		int i, len = 0;
		char *str, *as, *strcpy;

		for (i = 0; i < ac; i++)
		{
			len += _strlen(av[i]);
		}
		str = (char *)malloc((len + 1) * sizeof(char));
		if (str != (void *)'\0')
		{
			strcpy = str;
			for (i = 0; i < ac; i++)
			{
				as = av[i];
				while (*as != '\0')
				{
					*strcpy = *as;
					strcpy++;
					as++;
				}
				*strcpy = '\n';
				strcpy++;
			}
			*strcpy = '\0';
		}
		return (str);
	}
	else
	{
		return ((void *)'\0');
	}
}

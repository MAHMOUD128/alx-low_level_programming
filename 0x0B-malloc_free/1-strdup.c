#include "main.h"
#include <stdlib.h>

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

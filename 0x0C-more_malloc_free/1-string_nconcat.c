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
	}
	return (len);
}

/**
  * string_nconcat - concats 2 strs
  * @s1: first str
  * @s2: second str
  * @n: num of bytes to be copied from s2
  *
  * Return: pointer to new space allocated for the res
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s1cpy = s1, *s2cpy = s2, *str, *strcpy;
	unsigned int len1 = 0, len2 = 0, len;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (len1 || (len2 && n))
	{
		len = len1 + (len2 < n ? len2 : n);
		str = malloc((len + 1) * sizeof(char));
		strcpy = str;
		s1cpy = s1;
		s2cpy = s2;
		if (str != (void *)'\0')
		{
			while (len--)
			{
				if (len1)
				{
					*strcpy = *s1cpy;
					s1cpy++;
					len1--;
				}
				else if (len2 && n--)
				{
					*strcpy = *s2cpy;
					s2cpy++;
					len2--;
				}
				strcpy++;
			}
			*strcpy = '\0';
		}
	}
	else
	{
		str = (char *)malloc(sizeof(char));
		if (str != (void *)'\0')
			*str = '\0';
	}
	return (str);
}

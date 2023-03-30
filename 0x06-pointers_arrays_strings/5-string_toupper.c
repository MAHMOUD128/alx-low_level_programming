#include "main.h"

/**
  * string_toupper - changes all lowercase chars to uppercase
  * @str: string to be changed
  *
  * Return: pointer to str
  */
char *string_toupper(char *str)
{
	char *strcpy = str;

	while (*strcpy != '\0')
	{
		if (*strcpy >= 97 && *strcpy < 97 + 26)
		{
			*strcpy -= 32;
		}
		strcpy++;
	}
	return (str);
}

#include "main.h"

/**
  * _strcat - concatenates two strings
  * @dest: str to be appended to
  * @src: str to be appended
  *
  * Return: pointer to dest
  */
char *_strcat(char *dest, char *src)
{
	char *destcpy = dest;

	while (*destcpy != '\0')
	{
		destcpy++;
	}
	while (*src != '\0')
	{
		*destcpy = *src;
		src++;
		destcpy++;
	}
	*destcpy = '\0';
	return (dest);
}

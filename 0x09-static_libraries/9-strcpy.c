#include "main.h"

/**
  * _strcpy - copies str pointed to by src to dest
  * @dest: pointer to buffer
  * @src: pointer to str to be copied
  *
  * Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	char *destcpy = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (destcpy);
}

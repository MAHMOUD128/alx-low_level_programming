#include "main.h"

/**
  * _strncat - concatenates two strings
  * @dest: str to be appended to
  * @src: str to be appended
  * @n: bytes to be appended
  *
  * Return: pointer to dest
  */
char *_strncat(char *dest, char *src, int n)
{
	char *destcpy = dest;

	while (*destcpy != '\0')
	{
		destcpy++;
	}
	while (*src != '\0' && n--)
	{
		*destcpy = *src;
		src++;
		destcpy++;
	}
	*destcpy = '\0';
	return (dest);
}

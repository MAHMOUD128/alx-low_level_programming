#include "main.h"

/**
  * _memcpy - copies memory area
  * @dest: dest of copy
  * @src: src of copy
  * @n: num of bytes to be copied
  *
  * Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *destcpy = dest;

	while (n--)
	{
		*destcpy = *src;
		destcpy++;
		src++;
	}
	return (dest);
}

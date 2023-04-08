#include "main.h"

/**
  * _memset - fills memory with a const byte
  * @s: memory area
  * @b: const byte
  * @n: num of bytes to be filled
  *
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	char *scpy = s;

	while (n--)
	{
		*scpy = b;
		scpy++;
	}
	return (s);
}

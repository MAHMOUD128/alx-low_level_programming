#include "main.h"

/**
  * _strspn - gets len of prefix substr
  * @s: string
  * @accept: bytes to be checked
  *
  * Return: num of bytes in init of s consists of bytes from accept
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *acceptcpy = accept;

	while (*s != '\0')
	{
		acceptcpy = accept;
		while (*acceptcpy != '\0')
		{
			if (*s == *acceptcpy)
			{
				count++;
				break;
			}
			acceptcpy++;
		}
		if (*acceptcpy == '\0')
		{
			break;
		}
		s++;
	}
	return (count);
}

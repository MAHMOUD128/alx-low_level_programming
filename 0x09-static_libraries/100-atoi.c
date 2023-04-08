#include "main.h"

/**
  * _atoi - convert str to int
  * @s: str to be converted
  *
  * Return: int
  */
int _atoi(char *s)
{
	char sign = 1, numFound = 0;
	unsigned int num = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			numFound = 1;
			num = num * 10 + *s - '0';
		}
		else if (numFound)
		{
			break;
		}
		s++;
	}
	return (sign * num);
}

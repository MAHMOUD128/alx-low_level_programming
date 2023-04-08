#include "main.h"

/**
 * _isalpha - return 1 if lowercase or uppercase and 0 for else.
 * @c: the char in ASCII code
 *
 * Return: 1 for lowercase or uppercase and 0 for else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

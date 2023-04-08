#include "main.h"

/**
 * _islower - check if the char lower or not
 * @c: The char in ASCII cod
 *
 * Return: 1 for lowercase char and 0 if else (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

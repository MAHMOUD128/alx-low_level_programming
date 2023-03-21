#include "main.h"

/**
 * print_alphabet - Print a-z in one line
 *
 * Return: Always 0 (Succes)
 */

void print_alphabet(void)
{
	int i;

	for(i = 97 ; i < 123 ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

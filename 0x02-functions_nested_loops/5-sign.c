#include "main.h"

/**
 * print_sign - check number if n greater than 0 return 1 ang print +,
 * if n less than 0 return -1 and print  -.
 * @n: number user entiry it .
 * Return: 1 if n greater , -1 if less , 0 if equql zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}

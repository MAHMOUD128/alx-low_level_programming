#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - to print from n to 98 or oppisite.
 * @n: end or start loop.
 * Return: no return.
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			printf("%d" , i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n < 98)
	{
		int j;

		for (j = n; j <= 98; j++)
		{
			printf("%d" , j);
			if (j != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		printf("%d" , n);
	}
}

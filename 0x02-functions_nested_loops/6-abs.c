#include "main.h"

/**
 * _abs - check the code and compare i if great or less zero.
 * @i: number you enter it.
 * Return: i if greater or equal zero.
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}

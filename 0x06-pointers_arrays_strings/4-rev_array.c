#include "main.h"

/**
  * reverse_array - reverses an array of ints
  * @a: array to be reversed
  * @n: num of array elements
  */
void reverse_array(int *a, int n)
{
	int *acpy = a;

	while (acpy < a + --n)
	{
		int tmp = *acpy ^ *(a + n);
		*acpy = tmp ^ *acpy;
		*(a + n) = tmp ^ *(a + n);
		acpy++;
	}
}

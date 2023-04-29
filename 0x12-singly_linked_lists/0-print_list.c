#include "lists.h"
#include <stdio.h>

/**
  * print_list - prints all the elements of a list_t list
  * @h: list to be printed
  *
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *ptr = h;

	while (ptr)
	{
		if (ptr->str)
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		nodes++;
		ptr = ptr->next;
	}
	return (nodes);
}

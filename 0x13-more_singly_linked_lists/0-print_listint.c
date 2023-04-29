#include "lists.h"
#include <stdio.h>

/**
  * print_listint - prints all the elements of a listint_t list
  * @h: list to be printed
  *
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *ptr = h;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		nodes++;
		ptr = ptr->next;
	}
	return (nodes);
}

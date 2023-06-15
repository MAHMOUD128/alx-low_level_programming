#include "lists.h"
#include <stdio.h>

/**
  * print_dlistint - prints all the elements of a dlistint_t list
  * @h: head of list
  *
  * Return: number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *ptr = h;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		nodes++;
		ptr = ptr->next;
	}
	return (nodes);
}

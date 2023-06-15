#include "lists.h"
#include <stdlib.h>

/**
  * add_dnodeint_end - adds a new node at the end of a dlistint_t list
  * @head: pointer to head
  * @n: int to be added
  *
  * Return: ponter to new node, NULL if it failed
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *ptr = *head;

	if (!new_node)
		return ((void *)'\0');
	new_node->n = n;
	new_node->next = (void *)'\0';
	if (ptr)
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	new_node->prev = ptr;
	return (new_node);
}

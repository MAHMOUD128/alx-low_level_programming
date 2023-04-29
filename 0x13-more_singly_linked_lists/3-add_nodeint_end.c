#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list
  * @head: pointer to head
  * @n: int to be added
  *
  * Return: ponter to new node, NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t)), *ptr = *head;

	if (!new_node)
	{
		free(new_node);
		return ((void *)'\0');
	}
	new_node->n = n;
	new_node->next = (void *)'\0';
	if (ptr)
	{
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}

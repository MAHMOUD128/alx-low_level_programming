#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - adds a new node at the beginning of a listint_t list
  * @head: pointer to head
  * @n: int to be added
  *
  * Return: ponter to new node, NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		free(new_node);
		return ((void *)'\0');
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}

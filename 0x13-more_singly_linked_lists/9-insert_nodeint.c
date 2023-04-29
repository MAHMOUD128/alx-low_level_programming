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
		return ((void *)'\0');
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}

/**
  * insert_nodeint_at_index - inserts a new node at given pos
  * @head: head of list
  * @idx: pos
  * @n: data
  *
  * Return: pointer to new node, NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = -1;
	listint_t *ptr = (void *)'\0';

	if (idx == 0)
	{
		ptr = add_nodeint(head, n);
	}
	else if (head)
	{
		ptr = *head;
		while (ptr && i + 2 < idx)
		{
			ptr = ptr->next;
			i++;
		}
		if (ptr && i + 2 == idx)
		{
			add_nodeint(&(ptr->next), n);
			ptr = ptr->next;
		}
		else
		{
			ptr = (void *)'\0';
		}
	}
	return (ptr);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * add_nodep - adds a new node at the beginning of a listp_t list
  * @head: pointer to head
  * @p: pointer to be added
  *
  * Return: ponter to new node, NULL if it failed
  */
listp_t *add_nodep(listp_t **head, const listint_t *p)
{
	listp_t *new_node = malloc(sizeof(listp_t));

	if (!new_node)
	{
		free(new_node);
		return ((void *)'\0');
	}
	new_node->p = p;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}

/**
  * print_listint_safe - prints all the elements of a listint_t list
  * @h: list to be printed
  *
  * Return: number of nodes
  */
size_t print_listint_safe(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *ptr = h;
	listp_t *phead = (void *)'\0', *p_it;

	while (ptr)
	{
		p_it = phead;
		while (p_it)
		{
			if (p_it->p == ptr)
			{
				while (phead)
				{
					p_it = phead;
					phead = phead->next;
					free(p_it);
				}
				printf("-> [%p] %d\n", (void *)ptr, ptr->n);
				return (nodes);
			}
			p_it = p_it->next;
		}
		add_nodep(&phead, ptr);
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		nodes++;
		ptr = ptr->next;
	}
	while (phead)
	{
		p_it = phead;
		phead = phead->next;
		free(p_it);
	}
	return (nodes);
}

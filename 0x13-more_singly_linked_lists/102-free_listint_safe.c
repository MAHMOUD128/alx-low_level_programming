#include "lists.h"
#include <stdlib.h>

/**
  * free_listint_safe - frees a listint_t list and sets head to NULL
  * @head: head of list
  *
  * Return: number of free'd nodes
  */
size_t free_listint_safe(listint_t **head)
{
	size_t nodes = 0;
	listp_t *phead = (void *)'\0', *p_it;

	if (head)
	{
		listint_t *ptr = *head;

		while (*head)
		{
			p_it = phead;
			while (p_it)
			{
				if (p_it->p == *head)
				{
					while (phead)
					{
						p_it = phead;
						phead = phead->next;
						free(p_it);
					}
					*head = (void *)'\0';
					return (nodes);
				}
				p_it = p_it->next;
			}
			add_nodep(&phead, *head);
			*head = (*head)->next;
			free(ptr);
			ptr = *head;
			nodes++;
		}
		while (phead)
		{
			p_it = phead;
			phead = phead->next;
			free(p_it);
		}
		*head = (void *)'\0';
	}
	return (nodes);
}

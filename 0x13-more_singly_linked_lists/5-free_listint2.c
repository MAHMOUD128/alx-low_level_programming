#include "lists.h"
#include <stdlib.h>

/**
  * free_listint2 - frees a listint_t list and sets head to NULL
  * @head: head of list
  */
void free_listint2(listint_t **head)
{
	if (head)
	{
		listint_t *ptr = *head;

		while (*head)
		{
			*head = (*head)->next;
			free(ptr);
			ptr = *head;
		}
		*head = (void *)'\0';
	}
}

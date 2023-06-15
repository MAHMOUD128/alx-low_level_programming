#include "lists.h"
#include <stdlib.h>

/**
  * free_dlistint - frees a dlistint_t list
  * @head: head of list
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (head)
	{
		head = head->next;
		free(ptr);
		ptr = head;
	}
}

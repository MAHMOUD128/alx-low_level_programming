#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - frees a listint_t list
  * @head: head of list
  */
void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (head)
	{
		head = head->next;
		free(ptr);
		ptr = head;
	}
}

#include "lists.h"
#include <stdlib.h>

/**
  * free_list - frees a list_t list
  * @head: head of list
  */
void free_list(list_t *head)
{
	list_t *ptr = head;

	while (head)
	{
		free(head->str);
		head = head->next;
		free(ptr);
		ptr = head;
	}
}

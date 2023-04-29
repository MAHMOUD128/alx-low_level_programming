#include "lists.h"
#include <stdlib.h>

/**
  * pop_listint - deletes head node
  * @head: head of list
  *
  * Return: head node's data
  */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *ptr;

	if (head && *head)
	{
		data = (*head)->n;
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	return (data);
}

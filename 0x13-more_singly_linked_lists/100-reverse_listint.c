#include "lists.h"

/**
  * reverse_listint - reverses a listint_t linked list
  * @head: head of linked list
  *
  * Return: new head
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *adj;

	if (head)
	{
		ptr = *head;
		*head = (void *)'\0';
		while (ptr)
		{
			adj = ptr->next;
			ptr->next = *head;
			*head = ptr;
			ptr = adj;
		}
	}
	return (head ? (*head) : (void *)'\0');
}

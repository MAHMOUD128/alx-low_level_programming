#include "lists.h"
#include <stdlib.h>

/**
  * delete_dnodeint_at_index - deletes node at index
  * @head: head of linked list
  * @index: idx of node to be deleted
  *
  * Return: 1 if success, -1 otherwise
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *ptr = (void *)'\0', *target;

	if (head)
	{
		ptr = *head;
		if (*head && index == 0)
		{
			*head = (*head)->next;
			(*head)->prev = (void *)'\0';
			free(ptr);
		}
		else
		{
			while (ptr && i + 1 < index)
			{
				ptr = ptr->next;
				i++;
			}
			if (ptr && i + 1 == index)
			{
				target = ptr->next;
				ptr->next = ptr->next->next;
				if (ptr->next)
					ptr->next->prev = ptr;
				free(target);
			}
			else
			{
				return (-1);
			}
		}
	}
	return (1);
}

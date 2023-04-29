#include "lists.h"
#include <stdlib.h>

/**
  * delete_nodeint_at_index - deletes node at index
  * @head: head of linked list
  * @index: idx of node to be deleted
  *
  * Return: 1 if success, -1 otherwise
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = (void *)'\0', *target;

	if (head)
	{
		ptr = *head;
		if (*head && index == 0)
		{
			*head = (*head)->next;
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

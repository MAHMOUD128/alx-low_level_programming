#include "lists.h"

/**
  * get_dnodeint_at_index - gets a pointer to nth node
  * @head: head of list
  * @index: index of required node
  *
  * Return: pointer to the node
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *ptr = head;

	while (ptr && i != index)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}

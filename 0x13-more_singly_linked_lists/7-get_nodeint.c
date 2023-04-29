#include "lists.h"

/**
  * get_nodeint_at_index - gets a pointer to nth node
  * @head: head of list
  * @index: index of required node
  *
  * Return: pointer to the node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = head;

	while (ptr && i != index)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}

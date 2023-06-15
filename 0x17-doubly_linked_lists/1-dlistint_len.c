#include "lists.h"

/**
  * dlistint_len - computes number of elements in a linked dlistint_t list
  * @h: list to be computed
  *
  * Return: len
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}

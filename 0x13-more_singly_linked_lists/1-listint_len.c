#include "lists.h"

/**
  * listint_len - computes number of elements in a linked listint_t list
  * @h: list to be computed
  *
  * Return: len
  */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}

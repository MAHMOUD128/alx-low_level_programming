#include "lists.h"

/**
  * sum_listint - sum of all data
  * @head: head of list
  *
  * Return: sum
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

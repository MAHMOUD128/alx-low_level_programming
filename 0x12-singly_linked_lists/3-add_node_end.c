#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node_end - adds a new node at the end of a list_t list
  * @head: pointer to head
  * @str: str to be added
  *
  * Return: ponter to new node, NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t)), *ptr = *head;
	char *dup = strdup(str);

	if (!new_node || !dup)
	{
		free(dup);
		free(new_node);
		return ((void *)'\0');
	}
	new_node->str = dup;
	new_node->len = strlen(dup);
	new_node->next = (void *)'\0';
	if (ptr)
	{
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}

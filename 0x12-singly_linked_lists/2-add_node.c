#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node - adds a new node at the beginning of a list_t list
  * @head: pointer to head
  * @str: str to be added
  *
  * Return: ponter to new node, NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	char *dup = strdup(str);

	if (!new_node || !dup)
	{
		free(dup);
		free(new_node);
		return ((void *)'\0');
	}
	new_node->str = dup;
	new_node->len = strlen(dup);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}

#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: premiere node
 * @str: input
 * Return: *head
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t i;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

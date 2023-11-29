#include <string.h>
#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: debut de la liste
 * @str: input
 * Return: head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t i = 0;
	list_t *tmp;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	new_node->len = i;

	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}
	return (*head);
}

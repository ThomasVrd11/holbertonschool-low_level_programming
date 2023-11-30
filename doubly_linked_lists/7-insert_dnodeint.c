#include "lists.h"
/**
 * insert_dnodeint_at_index - function insertion of a node
 * @h: ppppppppp
 * @idx: ints
 * @n: ints
 * Return: head
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t i;
	dlistint_t *new_node, *tmp;

	new_node = malloc(sizeof(dlistint_t));
	tmp = *h;
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (!idx)
	{
		return (add_dnodeint(h, n));
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (!tmp)
		{
			return (0);
		}
		tmp = tmp->next;
	}
	if (tmp)
	{
		new_node->next = tmp->next;
		new_node->prev = tmp;
		if (new_node->next != NULL)
			new_node->next->prev = new_node;

		tmp->next = new_node;
	}
	return (new_node);
}

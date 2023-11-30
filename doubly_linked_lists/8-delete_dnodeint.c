#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes a list
 * @head: pointer to pointer
 * @index: input
 * Return: -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int i = 0;

	if (!head || !(*head))
	{
		return (-1);
	}
	else
	{
		tmp = *head;
		while (index != i++ && tmp)
			tmp = tmp->next;

		if (!tmp)
			return (-1);
		if (tmp->next)
			tmp->next->prev = tmp->prev;
		if (index == 0)
			*head = tmp->next;
		else
			tmp->prev->next = tmp->next;

		free(tmp);
		return (1);
	}
	return (-1);
}

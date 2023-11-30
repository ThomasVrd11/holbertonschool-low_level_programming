#include "lists.h"
/**
 * free_dlistint - function qui libere les reins
 * @head: pointer
 * Return: nan
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

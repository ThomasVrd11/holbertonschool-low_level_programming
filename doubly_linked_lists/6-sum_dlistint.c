#include "lists.h"
/**
 * sum_dlistint - fonction qui additionne les éléments d'une liste
 * @head: pointeur
 * Return: addition
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

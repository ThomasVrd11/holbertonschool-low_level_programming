#include "lists.h"

/**
 * dlistint_len - function that returns the length of the list
 * @h: input
 * Return: lenzzzz
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

#include "lists.h"
/**
 * list_len - function qui return la len d'une liste
 * @h: input
 * Return: len via i
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

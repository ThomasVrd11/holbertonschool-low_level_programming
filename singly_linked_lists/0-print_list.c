#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - Prints a linked list to the console
 * @h: pointeur de list
 * Return: lennnn
 */

size_t print_list(const list_t *h)
{
	size_t r;
	char *s;

	r = 0;
	if (!h)
		return (0);
	r++;
	while (1)
	{
		s = h->str;
		if (s)
			printf("[%d] %s\n", h->len, s);
		else
			printf("[0] (nil)\n");
		h = h->next;
		if (!h)
			break;
		r++;
	}
	return (r);
}

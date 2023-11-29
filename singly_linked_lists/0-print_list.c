#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - Prints a linked list to the console.
 * @h: pointeur de list
 * Return: lennn
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		printf("[%u]", h->len);

		if (h->str == NULL)
		{
			printf("(nil)\n");
		}

		else
		{
			printf("(%s)\n", h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}

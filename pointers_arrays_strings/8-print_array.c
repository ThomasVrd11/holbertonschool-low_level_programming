#include "main.h"
#include <stdio.h>

/**
 * print_array - print
 * @a: input l'array
 * @n: input n
 * Return: aucun
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}

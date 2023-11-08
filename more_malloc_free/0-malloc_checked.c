#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: int
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(sizeof(char) * b);

	if (p == NULL)
		exit(98);
	return (p);
}

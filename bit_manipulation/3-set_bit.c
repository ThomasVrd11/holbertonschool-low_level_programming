#include "main.h"

/**
 * set_bit - set a bit
 * @n: une ombre au masculin
 * @index: index, c'est parlant non?
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set = 1UL << index;

	if (index >= sizeof(unsigned long int) * CHAR_BIT)
		return (-1);

	*n |= set;
	return (1);
}

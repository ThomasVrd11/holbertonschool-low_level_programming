#include "main.h"

/**
 * get_bit - get a bit
 * @n: un nombr(il)
 * @index: the index
 * Return: the result
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int result = n >> index;

	if (index >= sizeof(unsigned long int) * CHAR_BIT)
		return (-1);
	return (result & 1);
}

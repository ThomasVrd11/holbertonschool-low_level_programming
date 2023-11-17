#include "function_pointers.h"

/**
 *int_index - ilo est ou le int ???,
 *@array: le paramaetre
 *@size: taille array
 *@cmp: pointeur
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != 0 && size != 0 && cmp != 0)
		for (i = 0; i < size; i++)
		{
			if ((cmp)(array[i]) != 0)
			{
				return (i);
			}
		}
	return (-1);
}

#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of ints
 * using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: first index where value is located. If value is not present
 * in array or if array is NULL, return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

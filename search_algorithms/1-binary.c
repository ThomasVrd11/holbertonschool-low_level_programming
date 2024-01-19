#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: if value not present in array or if array is NULL,
 * return -1, else return the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left = 0, right = size - 1;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);

		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}

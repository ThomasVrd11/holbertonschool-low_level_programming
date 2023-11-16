#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - execute une fonction as a parameter
* @array: stirng
* @size: la taille du string
* @action: fonction poiteurzouille
* Return: jsp
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	
	if (array != 0 && action != 0)
	{
		for (index = 0; index < size; index++)
			action(array[index]);
	}
}

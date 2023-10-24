#include "main.h"
#include <stdio.h>

/**
* reverse_array - bah reverse l'array quoi
* @a: un array
* @n: le nombre d'élements dans l'array
*
* Return: rien du tout, nada, niet
*/

void reverse_array(int *a, int n)
{
	int start, end, temporaire;

	for (start = 0; start < n - 1; start++)
	{
		for (end = start + 1; end > 0; end--)
		{
			temporaire = *(a + end);
			*(a + end) = *(a + (end - 1));
			*(a + (end - 1)) = temporaire;
		}
	}
}

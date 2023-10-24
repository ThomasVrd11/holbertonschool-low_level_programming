#include "main.h"
/**
 * _strcat - concatenate deux strings
 * @destination: destination
 * @src: source.
 * Return: le pointeur verrs destination.
 */
char *_strcat(char *destination, char *src)
{
	int count = 0, count2 = 0;

	while (*(destination + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(destination + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (destination);
}

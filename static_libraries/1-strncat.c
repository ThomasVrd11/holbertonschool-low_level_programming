#include "main.h"

/**
* _strncat - superpose deux strings.
* @destination: destination
* @src: source
* @n: nombre de bytes dans src
* Return: le pointeur vers dest
*/

char *_strncat(char *destination, char *src, int n)
{
	int compte = 0, compte2 = 0;

	while (*(destination + compte) != '\0')
	{
		compte++;
	}
	for (compte2 = 0; compte2 < n; compte2++)
	{
		*(destination + compte) = *(src + compte2);
		if (*(src + compte) == '\0')
		{
			break;
		}
		compte++;
	}
	return (destination);
}


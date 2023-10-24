#include "main.h"

/**
* _strncpy - copie un string
* @dest: la destination
* @src: source
* @n: le nombre de bytes venant de src
* Return: le pointer vers dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
return (dest);
}

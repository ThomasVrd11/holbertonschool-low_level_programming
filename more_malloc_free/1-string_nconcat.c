#include "main.h"

/**
* string_nconcat - concat deux strings
* @s1: char
* @s2: char ausi
* @n: un int !!!!
* Return: retourne mon cerveau dans tous les sens
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = n;
	unsigned k; 

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (k = 0; s1[k]; k++)
		i++;

	p = malloc(sizeof(char) * (i + 1));

	i = 0;

	for (k = 0; s1[k]; k++)
	{
		if (p == NULL)
			return (NULL);
		p[i++] = s1[k];
	}
	for (k = 0; s2[k] && k < n; k++)
	{
		if (p == NULL)
			return (NULL);
		p[i++] = s2[k];
	}
	p[i] = '\0';

	return (p);
}

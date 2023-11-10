#include "main.h"
#include <string.h>

/**
* str_concat - deux strings se font un calin
* @s1: china number one
* @s2: lewis hamilton
* Return: gros calin de strings
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int ind;
	unsigned int jnd;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	p = (char *)malloc(strlen(s1) + strlen(s2) + 1);

	if (p == NULL)
		return (NULL);

	for (ind = 0; ind < strlen(s1); ind++)
	{
		p[ind] = s1[ind];
	}
	for (jnd = 0; jnd < strlen(s2); jnd++)
	{
		p[ind + jnd] = s2[jnd];
			p[ind + jnd + 1] = '\0';
	}
	return (p);
	free(p);
}

/**
 * version d'alexandre
* {
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	concatenated = malloc(strlen(s1) + strlen(s2) * sizeof(char) + 1);

	if (concatenated == NULL)
	{
		return (NULL);
	}

	strcpy(concatenated, s1);
	strcat(concatenated, s2);

	return (concatenated);
}
*/

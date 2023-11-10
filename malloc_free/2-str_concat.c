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
	int ind;
	int jnd;
	int longueur1;
	int longueur2;
	int calin;
	char *p;

	longueur1 = strlen(s1);
	longueur2 = strlen(s2);
	calin = longueur1 + longueur2;

	if (s1[0] == 0 || s2[0] == 0)
	{
		p = malloc(sizeof(char) * 1);
		p[0] = '\0';
		return (p);
	}
	p = malloc(sizeof(char) * (calin));
	for (ind = 0; ind < longueur1; ind++)
		p[ind] = s1[ind];

	for (jnd = 0; jnd < longueur2; jnd++)
	{
		p[ind] = s2[jnd];
		ind++;
	}
	return (p);
}

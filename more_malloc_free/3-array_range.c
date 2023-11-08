#include "main.h"

/**
 * array_range - creer un array comme si c'est pas deja ce quonfaitdepuis 3 ans
 * @min: premiere valeur
 * @max: derniere valeur
 * Return: retourne en enfer satané démon
 */

int *array_range(int min, int max)
{
	int entreDeux;
	int i;
	int *arrayR;

	if (min > max)
		return (NULL);
	entreDeux = max - min;
	arrayR = malloc(sizeof(int) * (entreDeux + 1));
	if (arrayR == NULL)
		return (NULL);

	for (i = 0; min <  max; i++)
	{
		arrayR[i] = min;
		min++;
	}
	return (arrayR);
}

#include "main.h"

/**
* factorial - retourne le factoriel
* @n: input
* Return: factoriel du nombre
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

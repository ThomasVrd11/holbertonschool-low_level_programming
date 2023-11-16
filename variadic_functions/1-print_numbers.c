#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - une fonction qui print les nombres
 * @separator: ben le separateur quoi
 * @n: nombres de param
 * @...: tous les parametres possibles
 * Return: plein de choses
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list liste;

	va_start(liste, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == (n - 1))
			separator = "";
		printf("%d%s", va_arg(liste, int), separator);
	}

	va_end(liste);
	printf("\n");
}

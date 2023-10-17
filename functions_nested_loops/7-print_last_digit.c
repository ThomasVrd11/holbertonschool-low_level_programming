#include "main.h"
/**
 * print_last_digit - print le dernier digit du nombre.
 * @n: le nombre en question
 *
 * Return: valeur du dernier nombre
 */
int print_last_digit(int n)
{
	int dernier = n % 10;

	if (dernier < 0)
		dernier *= -1;

	_putchar(dernier + '0');

	return (dernier);
}

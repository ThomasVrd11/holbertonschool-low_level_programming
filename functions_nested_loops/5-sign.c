#include "main.h"

/**
 * print_sign - Print le signe d'un nombre.
 * @n: le nombre dont le signe va se faire print
 * Return: 1 si le nombre ets plus grand que 0
 *         0 si le nombre est 0
 *         -1 si le nombre ets en dessous de 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

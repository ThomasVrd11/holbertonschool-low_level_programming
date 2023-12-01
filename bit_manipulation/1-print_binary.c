#include "main.h"
#include <stdio.h>
/**
 * print_binary - function  that returns the value of a bit
 * @n: unsigned int
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	if (n & 1)
		putchar('1');
	else
		putchar('0');
}

#include "main.h"

/**
* is_prime - detexte si un input est un prime
* @n: input
* @c: iterateur
* Return: 1 si n est un prime et 0 si c'est pas le cas
*/

int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}
/**
 * is_prime_number - detecte si un input est un nombre primaire
 * @n: input
 * Return: 1 si n est un prime et 0 si n n'est pas prime
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}

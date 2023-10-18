#include <stdio.h>

/**
* print_to_98 - print tous les natural numbers jusqu'a 98.
*
* @n: le nombre par lequel on commence a compter
*/
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		printf("%d, ", n++);
		printf("%d\n", n);
	}
}

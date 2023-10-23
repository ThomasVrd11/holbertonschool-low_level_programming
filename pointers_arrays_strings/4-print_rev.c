#include "main.h"
#include "2-strlen.c"
/**
* print_rev- print un string a l'envers
* @s: le char a getstring
*
*/

void print_rev(char *s)
{
int i = 0;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

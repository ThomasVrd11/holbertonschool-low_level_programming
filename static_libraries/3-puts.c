#include "main.h"
#include <stdio.h>
/**
* _puts- print un string suivi d'une nouvelle ligne
*
* @str: le char a getstring
*/

void _puts(char *str)
{

int i = 0;

	for (; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}

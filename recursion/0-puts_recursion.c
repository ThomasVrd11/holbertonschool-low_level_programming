#include "main.h"
/**
* _puts_recursion - print le string suivi d'un retour a la ligne
* @s: le string a print
* Return: pas de return
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

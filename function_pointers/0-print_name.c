#include "function_pointers.h"

/**
 * print_name - fonction
 * @name: char p
 * @f: fonction pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}


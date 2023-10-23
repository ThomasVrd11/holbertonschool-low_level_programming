#include "main.h"
#include "2-strlen.c"

/**
* puts2- print 02468
*
* @str: oll
*/

void puts2(char *str)
{
	int compte;

	for (compte = 0; compte < _strlen(str); compte++)
	{
		if (compte % 2 == 0)
		{
			_putchar(str[compte]);
		}
	}
	_putchar('\n');
}

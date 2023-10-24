#include "main.h"
/**
 * string_toupper - change toutes les lettres de minus a maj dans le string
 * @s: input string .
 * Return: *p vers dest.
 */

char *string_toupper(char *s)
{
	int compte = 0;

	while (*(s + compte) != '\0')
	{
		if ((*(s + compte) >= 97) && (*(s + compte) <= 122))
			*(s + compte) = *(s + compte) - 32;
		compte++;
	}

	return (s);
}

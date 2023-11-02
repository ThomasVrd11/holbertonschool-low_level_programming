#include "main.h"
/**
* _isupper - check pour des majuscules
*
* @c: le char a check
*
* Return: 1 si majuscule, 0 si minuscule
*/

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

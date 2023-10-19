#include "main.h"

/**
 * _isdigit - Checks un digit (0-9).
 * @c: Le nombre qui se fait check.
 *
 * Return: 1 si le nimbre est un digit, sinon 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * more_numbers - Print de 0 a 14 10 fois.
 */
void more_numbers(void)
{
	int num, compte;

	for (compte = 0; compte <= 9; compte++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}

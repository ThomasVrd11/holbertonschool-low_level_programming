#include "main.h"
/**
 * jack_bauer - Prints chaque minute de 00:00 a 23:59.
 */
void jack_bauer(void)
{
	int heure, minute;

	for (heure = 0; heure <= 23; heure++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((heure / 10) + '0');
			_putchar((heure % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}

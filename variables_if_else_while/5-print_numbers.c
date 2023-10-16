#include <stdio.h>
/**
* main- on veut print de 0 a 10
*
* boucle for pour itérer de 0 à 9 (inclus).
* La variable number prend successivement les valeurs de 0 à 9.
*
*
* Return: Toujours 0
*/
int main(void)
{
	int nombre;

	for (nombre = 0; nombre < 10; nombre++)
	printf("%d", nombre);
	printf("\n");

return (0);
}

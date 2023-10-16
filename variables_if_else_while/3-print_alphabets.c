#include <stdio.h>

/**
* main - Prints l'alphabet en minuscule puis majuscule
*
* deux boucles qui se suivent 
*
*
* Return: toujours 0.
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
	putchar(letter);

	putchar('\n');

return (0);
}

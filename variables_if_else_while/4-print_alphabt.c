#include <stdio.h>

/**
* main- recite l'alphabet, parfois maj
*
* Return: tjrs succes (0)
*
* je declare letter
*
*
*/

int main(void)
{
char letter = 'a';

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
putchar(letter);
}
putchar('\n');
return (0);
}

#include <stdio.h>
#include <unistd.h>
/**
* main- Write rapide
*
* Return: tjrs 0
*/
int main(void)
{
write(1, "0123456789abcdef\n", 17);
return (0);
}

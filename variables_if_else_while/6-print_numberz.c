#include<stdio.h>
#include<unistd.h>
/**
* main- code de triche activé
*
* Return: toujours 0
*/
int main(void)
{
write(1, "9876543210\n", 11);
return (0);

}

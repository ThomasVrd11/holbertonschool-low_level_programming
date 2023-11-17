#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
* main - programme pour operations
* @argc: compte d'arg
* @argv: array d'argument
* Return: normalement 0, 98 si erreur, 9ç si illegal op
*/

int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

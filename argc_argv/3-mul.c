#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - fonction
 * @argc: variable
 * @argv: String
 * Return: 0 pitié
 */


int main(int argc, char *argv[])
{

	int n1, n2, resultat;

	if (argc != 3)
	{
		printf("Error\n");

	return (1);
	}

	n1 = atoi(argv[1]);

	n2 = atoi(argv[2]);

	resultat = n1 * n2;

		printf("%d\n", resultat);

	return (0);
}

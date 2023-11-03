#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: argument value
 * Return: 0 (success) or 1 (error)
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, j = 0;
	char *string;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		string = argv[i];

		while (string[j] != 0)
		{
			if (string[j] < '0' || string[j] > '9')
			{
				printf("Error\n");
				return (1);

			}
			j++;
		}
		sum += atoi(argv[i]);

	}
	printf("%d\n", sum);
	return (0);
}

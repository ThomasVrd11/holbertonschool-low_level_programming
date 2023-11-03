#include <stdio.h>
#include <stdlib.h>


/**
 * main - fonction
 * @argc: variable
 * @argv: String
 * Return: 0
 */


int main(int argc, char *argv[])
{
	int sum = 0;
	int i, num;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
		return (1);
		}

		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}

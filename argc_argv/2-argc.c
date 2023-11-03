#include <stdio.h>

/**
 * main - fonction
 * @argc: variable
 * @argv: String
 * Return: 0 bref
 */


int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

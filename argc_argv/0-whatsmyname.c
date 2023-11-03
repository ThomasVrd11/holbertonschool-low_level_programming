#include <stdio.h>

/**
 * main - print the name of the program even if it's not slim shady
 * @argc: argument count
 * @argv: argument value
 * Return: 0 (success)
 */

int main(int argc, char **argv) {
    if (argc > 0) {
        printf("%s\n", argv[0]);
    }
    return 0;
}

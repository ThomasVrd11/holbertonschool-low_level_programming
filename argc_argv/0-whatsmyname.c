#include <stdio.h>

/**
* main - print le nom du programme
* Return: zero
*/

int main(int argc, char **argv) {
    if (argc > 0) {
        printf("%s\n", argv[0]);
    }
    return 0;
}

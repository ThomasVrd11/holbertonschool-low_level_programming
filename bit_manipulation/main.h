#ifndef __MAIN__
#define __MAIN__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);

#endif

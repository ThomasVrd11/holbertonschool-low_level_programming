#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
* op_add - addition
* @a: a
* @b: b
* Return: A + B
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - soumission
* @a: a
* @b: b
* Return: A - B
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - mulhouse
* @a: a
* @b: b
* Return: A * B
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - dividende
* @a: a
* @b: b
* Return: A / B
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - modulax
* @a: a
* @b: b
* Return: A % B
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

#include "function_pointers.h"

/**
 * print_name - fonction
 * @name: char p
 * @f: fonction pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

/**
 * @f: Function pointer to a function that takes a char pointer and
 *     returns nothing (void). This function is responsible for
 *     determining how the name is printed (e.g., as-is, uppercase, etc.).
 *
 * Description: This function takes a string and a function pointer as
 *     arguments. It checks if both the string and the function pointer
 *     are not null. If they are valid, it calls the function pointed to
 *     by 'f' and passes the name string to it. This design allows for
 *     flexibility in how the name is printed, as the printing behavior
 *     is determined by the function pointed to by 'f'.
 *     For instance, 'f' can point to a function that prints the name
 *     as-is, or another function that converts the name to uppercase
 *     before printing. This approach demonstrates the use of function
 *     pointers for callback functionality in C.
 */

#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name using a specified printing function
 * @name: Pointer to the name string
 * @f: Pointer to the printing function
 *
 * Description: Function prints the given name using the specified printing
 *              function pointed to by @f.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}

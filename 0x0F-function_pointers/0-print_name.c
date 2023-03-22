#include "function_pointers.h"

/**
 * print_name - hello
 * @name: s
 * @f: s
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}

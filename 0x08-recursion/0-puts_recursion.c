#include "main.h"
/**
 * _puts_recursion - hello
 * @s: n
 */
void _puts_recursion(char *s)
{
_putchar(*s);
s++;
if (*s != '\0')
_puts_recursion(s);
}

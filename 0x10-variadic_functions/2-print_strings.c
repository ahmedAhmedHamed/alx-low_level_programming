#include "variadic_functions.h"
/**
 * print_strings - hello
 * @separator: s
 * @n: s
 * @...: s
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i = 0;
va_start(args, n);
for (i = 0; i < n; i++)
{
char *x = va_arg(args, char *);
if (x != 0)
printf("%s", x);
else
printf("(nil)");
if (separator != 0 && i != n - 1)
printf("%s", separator);
}
va_end(args);
printf("\n");
}

#include "variadic_functions.h"
/**
 * print_numbers - hello
 * @separator s
 * @n: s
 * @...: s
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
int i = 0;
va_start(args, n);
for (i = 0; i < n; i++)
{
int x = va_arg(args, int);
printf("%d", x);
if (separator != 0 && i != n-1)
printf("%s", separator);
}
va_end(args);
printf("\n");
}

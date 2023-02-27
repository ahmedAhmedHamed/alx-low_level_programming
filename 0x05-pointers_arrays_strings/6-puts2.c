#include "main.h"
/**
 * puts2 - helo
 * @str: str
 */
void puts2(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
if(*str == '\0')
break;
str++;
}
}

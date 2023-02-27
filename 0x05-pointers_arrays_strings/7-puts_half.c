#include "main.h"
/**
 * puts_half - helo
 * @str: str
 */
void puts_half(char *str)
{
int k = 0;
int p;
while (*(str + k) != '\0')
k++;
p = k;
if (k % 2 == 0)
k = k / 2;
else
k = (k - 1) / 2;
p = p - k;
while (*(str + p) != '\0')
_putchar(*(str + p++));
_putchar('\n');
}

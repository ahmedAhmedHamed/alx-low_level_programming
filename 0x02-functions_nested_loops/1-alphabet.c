#include "main.h"

/**
 * print_alphabet - helo
 */
void print_alphabet(void)
{
int i;
for(i = 97; i < 123; i++)
_putchar((char) i);
_putchar('\n');
}

/**
 * main - hello
 *
 * Return: 0 always
 */
int main(void)
{
print_alphabet();
return (0);
}

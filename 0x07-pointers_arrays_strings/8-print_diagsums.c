#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - helo
 * @a: a
 * @size: s
 */
void print_diagsums(int *a, int size)
{
int i;
int c1 = 0;
int c2 = 0;
for (i = 0; i < size; i++)
{
c1 += a[i + (size * i)];
c2 += a[(size - 1 - i) + (size * i)];
}
printf("%d, %d\n", c1, c2);
}

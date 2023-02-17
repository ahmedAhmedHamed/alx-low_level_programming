#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Hello
 *
 * Return: 0 always
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int x = n % 10;
if (x > 5)//"Last digit of %d is "
printf("Last digit of %d is %d and is greater than 5", n, x);
else if (x == 0)
printf("Last digit of %d is %d and is 0", n, x);
else if (x < 6)
printf("Last digit of %d is %d and is less than 6", n, x);
return (0);
}

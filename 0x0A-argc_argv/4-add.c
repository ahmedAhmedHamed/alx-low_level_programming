#include <stdio.h>
#include <ctype.h>

/**
* _atoi - Convert a string to an integer.
* @s: The pointer to convert
*
* Return: A integer
*/
int _atoi(char *s)
{
int i = 0;
int num1 = 0;
int mult1 = 1;
for (i = 0; s[i] != '\0'; i++)
;
i--;
while (i >= 0)
{
if (s[i] == '-')
{
num1 *= -1;
i--;
break;
}
num1 += (s[i--] - '0') * mult1;
mult1 *= 10;
}
return (num1);
}

/**
* noForeign - hello
* @s: s
* Return: s
*/
int noForeign(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
if (!isdigit(s[i]))
return (0);
return (1);
}

/**
* main - main
* @argc: s
* @argv: s
* Return: s
*/
int main(int argc, char *argv[])
{
int i;
int sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (!noForeign(argv[i]))
{
printf("Error\n");
return (1);
}
sum += _atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}

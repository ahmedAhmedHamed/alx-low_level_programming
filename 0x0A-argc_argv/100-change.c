#include <stdlib.h>
#include <stdio.h>

/**
 * calculate - hello
 * @num1: s
 * Return: s
 */
int calculate(int num1)
{
int finNum = 0;
while (num1 != 0)
{
if (num1 >= 25)
{
num1 -= 25;
finNum++;
}
else if (num1 >= 10)
{
num1 -= 10;
finNum++;
}
else if (num1 >= 5)
{
num1 -= 5;
finNum++;
}
else if (num1 >= 2)
{
num1 -= 2;
finNum++;
}
else if (num1 >= 1)
{
num1 -= 1;
finNum++;
}
}
return (finNum);
}

/**
 * main - main
 * @argc: s
 * @argv: s
 * Return: s
 */
int main(int argc, char *argv[])
{
int num1;
int finNum = 0;
num1 = atoi(argv[1]);
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (num1 < 0)
{
printf("0\n");
return (0);
}
finNum = calculate(num1);
printf("%d\n", finNum);
return (0);
}

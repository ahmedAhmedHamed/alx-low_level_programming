#include "3-calc.h"
/**
 * main - check the code
 * @argc: s
 * @argv: s
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int num1;
int num2;
int num3;
num2 = atoi(argv[3]);
if (argc != 4)
{
printf("Error\n");
return (98);
}
if ((argv[2][0] != '+' && argv[2][0] != '/' && argv[2][0] != '%' && argv[2][0] != '*' && argv[2][0] != '-') || (strlen(argv[2]) != 1))
{
printf("Error\n");
return (99);
}
if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
{
printf("Error\n");
return (100);
}
num1 = atoi(argv[1]);
num3 = get_op_func(argv[2])(num1, num2);
printf("%d\n", num3);
return (0);
}

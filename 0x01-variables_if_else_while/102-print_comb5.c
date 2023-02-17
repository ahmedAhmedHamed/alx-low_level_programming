#include <stdio.h>

/**
 * main - hello
 *
 * Return: 0 always
 */
int main(void)
{
int i;
int j;
int k;
int p;
int count = 10;
for (i = 0; i < count; i++)
{
    for (j = 0; j < count; j++)
    {
        for (k = i+1; k < count; k++)
        {
            for (p = j+1; p < count; p++)
            {
                printf("%d%d %d%d, ",i,j,k,p);
            }   
        }   
    }
}
putchar(10);
return(0);
}

#include "main.h"

/**
 * strtow - hello
 * @str: s
 * Return: s
 */
char **strtow(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int flag = 0;
    int counter = 0;
    int counterTwo = 0;
    char **myStr;
    if (str == 0 || str[0] == '\0')
        return (0);
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
            flag = 1;

        if (str[i] == ' ')
        {
            if (flag)
            counter++;
            flag = 0;
        }
        i++;
    }
    myStr = malloc(sizeof(char *) * counter);
    if (myStr == 0)
    {
        printf("zero\n");
        return (0);
    }
    j = 0;
    for (i = 0; i < counter; i++)
    {
        while (str[j] == ' ')
            j++;
        while (str[j] != ' ')
        {
            counterTwo++;
            j++;
        }
        myStr[i] = malloc(counterTwo);
        if (myStr[i] == 0)
        {
            printf("a7aa\n");
            return (0);
        }
    }
    j = 0;
    flag = 0;
    k = 0;
    for (i = 0; i < counter; i++)
    {
        while (str[j] == ' ' && str[j] != '\0')
            j++;

        while (str[j] != ' ' && str[j] != '\0')
        {
            myStr[i][k] = str[j];
            k++;
            j++;
        }
        myStr[i][k] = '\0';
        k = 0;
    }
    return (myStr);
}

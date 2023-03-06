#include "main.h"

/**
* _strstr - hello
* @haystack: helo
* @needle: helo
* Return: helo
*/
char *_strstr(char *haystack, char *needle)
{
int k = 0;
int j = 0;
while (haystack[k] != '\0')
{
while (haystack[k + j] == needle[j] && needle[j] != '\0')
j++;
if (needle[j] == '\0')
{
haystack += k;
return (haystack);
}
k++;
}
return ('\0');
}

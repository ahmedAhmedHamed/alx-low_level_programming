#include <stdio.h>
#include <string.h>

/**
 * main - hello
 * Return: exit code
 */
int main(void) {
char s[] = __FILE__;
char *str;
int i;
int len = strlen(s);
int len2;
int j = 0;
len--;
len2 = len;
while (s[len] != '/')
len--;
len++;
len2++;


str = malloc(len2 - len + 1);
for (i = len; i < len2 && j < len2 - len; i++)
str[j++] = s[i];
str[j] = '\0';

printf("%s", str);

free(str);
return 0;
}

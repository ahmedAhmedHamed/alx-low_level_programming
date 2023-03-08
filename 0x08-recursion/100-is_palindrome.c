#include "main.h"
/**
 * myIsPalindrome - hello
 * @s: s
 * @x: s
 * @len: s
 * Return: s
 */
int myIsPalindrome(char *s, int x, int len)
{
    if (s[x] != s[len - x])
        return 0;
    if (x >= len / 2)
        return 1;
    return (myIsPalindrome(s, x + 1, len));
}

/**
 * is_palindrome - hello
 * @s: s
 * Return: hello
 */
int is_palindrome(char *s)
{
int k = 0;
while (s[k] != '\0')
    k++;
return (myIsPalindrome(s, 0, k - 1));
}

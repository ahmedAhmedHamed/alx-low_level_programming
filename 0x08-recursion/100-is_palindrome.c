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
return (0);
if (x >= len / 2)
return (1);
return (myIsPalindrome(s, x + 1, len));
}
/**
 * stringLength - hello
 * @s: s
 * @n: s
 * Return: s
 */
int stringLength(char *s, int len)
{
if (s[len] == '\0')
return (0);
return (1 + stringLength(s, len + 1));
}

/**
 * is_palindrome - hello
 * @s: s
 * Return: hello
 */
int is_palindrome(char *s)
{
int k;
k = stringLength(s, 0);
return (myIsPalindrome(s, 0, k - 1));
}

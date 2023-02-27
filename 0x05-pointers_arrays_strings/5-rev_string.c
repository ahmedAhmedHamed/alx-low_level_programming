/**
 * rev_string - helo
 * @s: s
 */
void rev_string(char *s)
{
char * p;
int e;
int k;
p = s;
k = 0;
while (*p++ != '\0')
k++;
e = k / 2;
p--;
while (e != 0)
{
char temp;
temp = *s;
*s = *p;
*p = temp;
p--;
s++;
e--;
}
}

/**
 * rev_string - helo
 * @s: s
 */
void rev_string(char *s)
{
char * p;
p = s;
int k;
k = 0;
while (*p++ != '\0')
k++;
int e;
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

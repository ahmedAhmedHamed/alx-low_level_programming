/**
 * rev_string - helo
 * @s: s
 */
void rev_string(char *s)
{
int k;
int e;
int l;
l = 0;
k = 0;
while (s[k] != '\0')
k++;
k--;
e = k / 2;
while (k > e)
{
char temp;
temp = s[k];
s[k] = s[l];
s[l] = temp;
l++;
k--;
}
}

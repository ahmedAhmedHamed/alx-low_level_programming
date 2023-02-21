/**
 * _isalpha - checks if it is alphabetic
 * @c: potato
 *
 * Return: different
 */
int _isalpha(int c)
{
return (!((c > 90 && (c < 97 || c > 122)) || (c < 97 && (c < 65 || c > 90))));
}

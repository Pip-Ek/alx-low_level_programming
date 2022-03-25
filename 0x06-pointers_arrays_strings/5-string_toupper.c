/**
 * string_toupper - converts lowercase to upper
 * @s: string to convert
 * Return: address of s
 */
char *string_toupper(char *s)
{
	int i, c;

	c = 'A' - 'a';
	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] += c;
	}
	return (s);
}

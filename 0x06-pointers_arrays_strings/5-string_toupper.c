/**
 * string_toupper - converts lowercase to upper
 * @s: string to convert
 * Return: address of s
 */
char *string_toupper(char *s)
{
	int i, const;

	const = 'A' - 'a';
	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] += const;
	}
	return (s);
}

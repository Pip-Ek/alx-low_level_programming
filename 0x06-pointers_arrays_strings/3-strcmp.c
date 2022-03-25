/**
 * _strcmp - a function that compares two strings.
 * @s1: First string.
 * @s2: Second string
 * Return: -1, 0 or 1 if s1 is less, equal of greater
 * than s2 respectively.
 */

int _strcmp(char *s1, char *s2)
{
	int i, diff;

	while (diff == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		diff = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (diff);
}

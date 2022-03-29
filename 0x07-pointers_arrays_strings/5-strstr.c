#include <stddef.h>
/**
 * _strstr - finds first occurence of a substring.
 * @haystack: string to search
 * @needle: string to search for
 * Return: Pointer to first occurence or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == '\0' || needle[j] != haystack[i])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}

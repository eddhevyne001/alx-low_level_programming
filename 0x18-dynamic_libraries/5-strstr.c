#include "main.h"

/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the first occurrence of the substring `needle`
 *         in the string `haystack`, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int needle_len = 0, i = 0, j = 0, k = 0, count = 0;
	char *p;

	while (needle[needle_len] != '\0')
		needle_len++;

	while (haystack[i] != '\0')
		i++;

	if (needle_len == 0)
		return (haystack);

	while (haystack[j] != '\0')
	{
		if (haystack[j] == needle[0])
		{
			p = &haystack[j];
			k = j;
			count = 0;

			for (; count < needle_len; count++, k++)
			{
				if (haystack[k] == needle[count])
					continue;
				else
					break;
			}
		}

		if (count == needle_len)
			return (p);

		j++;
	}

	return ('\0');
}


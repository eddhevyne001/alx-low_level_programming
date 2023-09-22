#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The bytes to search for.
 *
 * Return: A pointer to the first occurrence of any byte in `accept` in the
 *         string `s`, or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s)
	{
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				return (s);
			j++;
		}
		j = 0;
		s++;
	}
	return ('\0');
}


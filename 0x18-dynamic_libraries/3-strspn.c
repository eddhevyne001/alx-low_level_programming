#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The characters to include in the prefix.
 *
 * Return: The number of characters in the prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	int j = 0, i = 0;
	unsigned int a = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				a++;
			j++;
		}
		i++;
		j = 0;
	}
	return (a);
}


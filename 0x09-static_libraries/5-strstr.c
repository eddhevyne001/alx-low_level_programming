#include <stdio.h>
#include <string.h>  // Added the string.h header for strncmp()

/**
 * _strstr - locates a substring
 * @haystack: string to look through
 * @needle: substring to find
 * Return: pointer to string with result of search
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int len;

	/* Get length of needle for strncmp */
	len = strlen(needle);  // Replaced the manual length calculation with strlen()

	/* compare substring */
	while (*haystack != '\0')
	{
		if (strncmp(haystack, needle, len) == 0)  // Replaced _strncmp() with strncmp()
			return haystack;
		haystack++;
	}
	return NULL;
}


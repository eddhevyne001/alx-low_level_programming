#include "main.h"

/**
 * palind2 - Calculates the length of a string.
 * @a: The string.
 * @l: The integer to count the length.
 * Return: The length of the string minus 1.
 */
int palind2(char *a, int l)
{
	if (*a == 0)
	return (l - 1);
	return (palind2(a + 1, l + 1));
}

/**
 * palind3 - Compares a string with its reverse.
 * @a: The string.
 * @l: The length of the string.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int palind3(char *a, int l)
{
	if (*a != *(a + l))
	return (0);
	else if (*a == 0)
	return (1);
	return (palind3(a + 1, l - 2));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to evaluate.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int l;

	l = palind2(s, 0);
	return (palind3(s, l));
}


#include "main.h"

/**
 * _print_rev_recursion - Reverses and prints a string recursively.
 * @s: The string to be reversed and printed.
 * Return: On success, 1 is returned.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}

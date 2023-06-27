#include <stdio>
/**
 * _strlen - the length of the function.
 * @str: the string
 * Return: length of string
 */
size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints a list of arguments based on the provided format.
 * @format: A string containing the format of the arguments to print.
 *          c = char, i = int, f = float, s = char * (if NULL print "(nil)").
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int n = 0, i = 0;
	char *sep = ", ";
	char *str;

	/* Initialize the va_list to access the arguments */
	va_start(valist, format);

	/* Find the length of the format string */
	while (format && format[i])
		i++;

	/* Loop through the format string and process each argument */
	while (format && format[n])
	{
		/* If it's the last character, change the separator to an empty string */
		if (n == (i - 1))
		{
			sep = "";
		}

		/* Process the argument based on the format specifier */
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(valist, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(valist, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(valist, double), sep);
			break;
		case 's':
			str = va_arg(valist, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		default:
			/* Ignore any unknown format specifiers */
			break;
		}

		n++;
	}

	/* Print a newline character to end the line */
	printf("\n");

	/* Clean up the va_list */
	va_end(valist);
}


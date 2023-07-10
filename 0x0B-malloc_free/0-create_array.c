#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array and initializes it with a given character
 * @size: The size of the array
 * @c: The character to initialize the array with
 * Return: A pointer to the created array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);

	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}
	return (array);
}

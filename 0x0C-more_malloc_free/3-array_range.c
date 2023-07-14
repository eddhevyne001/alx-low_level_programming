#include "main.h"

/**
 * array_range - Creates an array of integers containing values from min to max
 * @min: The smallest number in the array.
 * @max: The largest number in the array.
 * Return: NULL if min is greater than max or if memory allocation fails.
 */
int *array_range(int min, int max)
{
int *block;
int size, i;

if (min > max)
return (NULL);

size = max - min + 1;
block = malloc(sizeof(int) * size);

if (block != NULL)
{
for (i = 0; i < size; i++)
block[i] = min + i;

return (block);
}
else
{
return (NULL);
}
}

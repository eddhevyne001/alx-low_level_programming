#include <stdio.h>
/**
 * swap_int - swap vslues of two integers
 * @a: first integer
 * @b: second integer
 * Return: void
 */
void swap_int(int *a, int *b)
/*this swaps the values */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 *@mx: first value -char
 *@size: second value -int
 */
void print_diagsums(int *mx, int size)
{
	int i, j, sum_main_diag = 0, sum_sec_diag = 0, k, l = 0;

	k = size - 1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum_main_diag += mx[l];
			if (j == k)
				sum_sec_diag += mx[l];
			l++;
		}
		k--;
	}
	printf("%i, %i\n", sum_main_diag, sum_sec_diag);
}


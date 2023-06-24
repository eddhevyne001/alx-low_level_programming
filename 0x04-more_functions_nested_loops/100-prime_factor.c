#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int prime;

	prime = 3;
	while (prime < num / 2)
	{
		if ((num % prime) == 0)
		{
			if ((prime % 3) == 2)
				printf(",%lu ", prime);
		}

		prime += 2;
	}

	putchar('\n');
	return (0);
}



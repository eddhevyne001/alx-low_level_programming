#include <stdio.h>
/**
 * main - print 1 - 100
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
		printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
		printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
		printf("Buzz ");
		}
		else
		{
		printf("%d ", 1);
		}
	}
	printf("Buzz");
	printf("\n");

	return (0);
}

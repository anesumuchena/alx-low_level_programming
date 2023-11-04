#include <stdio.h>

/**
 * main - print out:
 * Fizz at multiples of 3
 * Buzz at multples of 5
 * FizzBuzz at multiples of both 3 & 5
 * Return: Always 0 success
 */

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		} else if (n % 3 == 0)
		{
			printf("Fizz");
		} else if (n % 5 == 0)
		{
			printf("Buzz");
		} else
		{
			printf("%d", n);
		}

		if (n < 100)
		{
			printf(" ");
		} else
		{
			printf("\n");
		}
		n++;
	}
	return (0);
}

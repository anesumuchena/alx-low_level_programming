#include <stdio.h>

/**
 * main - Entry Point
 * function - print all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

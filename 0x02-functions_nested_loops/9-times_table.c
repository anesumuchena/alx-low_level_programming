#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;

			if (j == 0)
				putchar('0');
			else
				putchar(',');

			putchar(' ');

			if (n < 10)
				putchar(' ');
			else
				putchar((n / 10) + '0');

			putchar((n % 10) + '0');

			if (j == 9)
				putchar('\n');
		}
	}
}

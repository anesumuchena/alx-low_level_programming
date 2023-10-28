#include <unistd.h>
#include "main.h"

/**
 * void print_times_table -  prints the n times table, starting with 0
 * @n: base number
 * Return: void
 */

void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
		return;
	}

	/*int i, j;*/

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (result < 10)
			{
				_putchar(' ');
			} else
			{
				_putchar((result / 10) + '0');
			}
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}

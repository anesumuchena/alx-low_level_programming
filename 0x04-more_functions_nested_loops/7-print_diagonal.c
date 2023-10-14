#include <unistd.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: is the number of times the character \ should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int spaces = 0;
		int j;

		while (n > 0)
		{
			for (j = 0; j < spaces; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			spaces++;
			n--;
		}
	}
}

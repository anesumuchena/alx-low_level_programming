#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98, new line
 * @n: input number
 * Return: void
 */

void print_to_98(int n)
{
	int i = n;

	if (n <= 98)
	{
		while (i <= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			i++;
		}
	} else
	{
		while (i >= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			i--;
		}
	}
	printf("\n");
}

#include <unistd.h>
#include "main.h"

/**
 * print_sign - prints the sign number
 * @n: number to check
 *
 * Return: 1 for >0, 0 for =0, -1 for >0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('-');
	return (-1);
}

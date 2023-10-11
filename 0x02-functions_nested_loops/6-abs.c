#include <unistd.h>
#include "main.h"

/**
 * _abs - computes absolute value of interer
 * @n: integer to compute abs value
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}

	return (n);
}

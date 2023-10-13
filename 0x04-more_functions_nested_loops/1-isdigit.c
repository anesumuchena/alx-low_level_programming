#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checjs for a digit (0 through 9)
 * @c: checks digits
 * Return: 1(if c i a digit), otherwise 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}

	return (0);
}

#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: The chaacter to be checked
 * Return: 1, if c = uppercase, otherwise return 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}

	return (0);
}

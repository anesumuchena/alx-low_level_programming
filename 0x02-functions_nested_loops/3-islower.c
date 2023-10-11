#include <unistd.h>
#include "main.h"

/**
 * _isLower - checks for lowercase character
 * @c: The character to check
 * Return:  if c is lowercasr, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}

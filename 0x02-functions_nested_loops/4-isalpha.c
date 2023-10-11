#include <unistd.h>
#include "main.h"

/**
 * _isalpha - cheks for alphabetic characters
 * @c: The character to check
 *
 * Return: 1 if c ia letter, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

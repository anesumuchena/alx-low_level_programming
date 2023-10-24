#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: memory area pointed
 * @b: constant byte
 * @n: first bytes
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (ptr);
}

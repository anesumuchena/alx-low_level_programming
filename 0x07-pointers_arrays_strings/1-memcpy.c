#include "main.h"

/**
 * *_memcpy - copies memory area.
 * @dest: memory area
 * @src: memory area
 * @n: copies n bytes
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (ptr);
}

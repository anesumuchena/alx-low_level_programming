#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - copies a string
 * @dest: string
 * @src: string
 * @n: number
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

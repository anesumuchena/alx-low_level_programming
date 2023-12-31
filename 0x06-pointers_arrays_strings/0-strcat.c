#include <stdio.h>
#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: string
 * @src: string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int n = 0;
	int i = 0;

	while (dest[n] != '\0')
	{
		n++;
	}

	while (src[i] != '\0')
	{dest[n] = src[i];
		n++;
		i++;
	}
	dest[n] = '\0';
	return (dest);
}

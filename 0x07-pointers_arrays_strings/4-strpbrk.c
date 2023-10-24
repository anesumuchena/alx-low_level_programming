#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: bytes in string
 * Return: pointer to s, accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				return (s);
			}
			accept++;
		}

		accept = start;
		s++;
	}
	return (NULL);
}

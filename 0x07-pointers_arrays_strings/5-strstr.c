#include "main.h"

/**
 * *_strstr -  locates a substring
 * @haystack: string
 * @needle: first occurrence of the substring
 * Return:  a pointer to located substring, or NULL if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
		{
			return (haystack);
		}
		haystack = starth + 1;
	}
	return (NULL);
}

#include <stdio.h>

/**
 * main - Entry point
 * Function - print out letters in lowercase, except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		if (n != 'e' && n != 'q')
		{
			putchar(n);
		}
		n++;
	}

	putchar('\n');
	return (0);
}

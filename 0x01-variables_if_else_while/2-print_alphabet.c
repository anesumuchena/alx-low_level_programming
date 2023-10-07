#include <stdio.h>

/**
 * main - Entry point
 * Function - print out letters in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}

	putchar('\n');
	return (0);
}

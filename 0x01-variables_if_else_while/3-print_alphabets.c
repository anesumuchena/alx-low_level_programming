#include <stdio.h>

/**
 * main - Entry point
 * Function - print out letters in lowercase then uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z' && uppercase <= 'Z')
	{
		putchar(lowercase);
		lowercase++;
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');
	return (0);
}

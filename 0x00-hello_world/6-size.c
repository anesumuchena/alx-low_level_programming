#include <stdio.h>

/**
 * main - Entry point
 * print
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu byte(s).\n", (unsigned long)sizeof(c));
	printf("Size of a char: %lu byte(s).\n", (unsigned long)sizeof(i));
	printf("Size of a char: %lu byte(s).\n", (unsigned long)sizeof(li));
	printf("Size of a char: %lu byte(s).\n", (unsigned long)sizeof(lli));
	printf("Size of a char: %lu byte(s).\n", (unsigned long)sizeof(f));
	return (0);
}

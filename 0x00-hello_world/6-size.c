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

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c), "byte(s)\n");
	printf("Size of a char: %lu.\n", (unsigned long)sizeof(i), "byte(s)\n");
	printf("Size of a char: %lu.\n", (unsigned long)sizeof(li), "byte(s)\n");
	printf("Size of a char: %lu.\n", (unsigned long)sizeof(lli), "byte(s)\n");
	printf("Size of a char: %lu.\n", (unsigned long)sizeof(f), "byte(s)\n");
	return (0);
}

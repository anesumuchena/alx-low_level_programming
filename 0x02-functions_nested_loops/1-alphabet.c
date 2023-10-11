#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - Prints lowercase alphabets, new line
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a >= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}

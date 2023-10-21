#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: number
 * @n: number of elements
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int tmp, beg = 0;
	int end = n - 1;

	while (beg < end)
	{
		tmp = *(a + beg);
		*(a + beg) = *(a + end);
		*(a + end) = tmp;
		beg++, end--;
	}
}

#include <stdio.h>
/**
 * swap_int - swap the values of two integer
 * @a: first input
 * @b: second input
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

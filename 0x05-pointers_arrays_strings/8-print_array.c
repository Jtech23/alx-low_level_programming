#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints the n of an array
 * @a: array
 * @n: Number of array to print
 * Retunr: Always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d", a[i]);
		printf(",");
		printf(" ");
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}

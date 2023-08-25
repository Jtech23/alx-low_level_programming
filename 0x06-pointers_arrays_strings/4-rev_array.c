#include "main.h"
/**
 * reverse_array - Reverse array
 * @a: Array to reverse
 * @n: Number of array to reverse
 * Return: Alwasy 0
 */

void reverse_array(int *a, int n)
{
	int i, b;

	i = 0;
	n = n - 1;
	for (i = 0; i < n; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		n--;
	}
}

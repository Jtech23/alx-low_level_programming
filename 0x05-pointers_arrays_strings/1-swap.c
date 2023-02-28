#include<stdio.h>
/**
 * swap_int - swaps the value of two pointer variable
 *
 * @a: first pointer variable
 * @b: second pointer variable
 */

void swap_int(int *a, int *b)
{
	int var1;
	int var2;

	var1 = *b;
	var2 = *a;
	*a = var1;
	*b = var2;
}

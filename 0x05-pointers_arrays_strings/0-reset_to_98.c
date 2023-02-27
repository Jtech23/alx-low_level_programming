#include <stdio.h>
/**
 * reset_to_98 - updates the value of a pointer variable
 *
 * 'n': pointer pointing to another variable
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	int p = 98;
	*n = p;
}

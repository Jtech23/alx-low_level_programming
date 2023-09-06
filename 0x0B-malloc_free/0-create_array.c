#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates array of character
 * @size: Size of int
 * @c: Character
 * Return: Returns a pointer to thwe array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array = (char*)malloc(size * sizeof(c));
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

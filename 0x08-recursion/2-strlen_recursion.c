#include "main.h"
/**
 * _strlen_recursion - Prints the number of a string
 * @s: String to coubnt
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}

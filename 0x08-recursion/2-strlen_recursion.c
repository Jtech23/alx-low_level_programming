#include "main.h"
/**
 * _strlen_recursion - Prints string length
 * @s: string to prints its length
 * Return: returns the value of a
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s != '\0')
	{
		a++;
		a += _strlen_recursion(s + 1);
	}
	return (a);
}

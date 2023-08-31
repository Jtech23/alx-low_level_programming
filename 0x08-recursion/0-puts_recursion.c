#include "main.h"
/**
 * _puts_recursion - Print a string
 * @s: Char to rpint
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}

#include "main.h"
/**
 * _puts_recursion - Print a string
 * @s: Char to rpint
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
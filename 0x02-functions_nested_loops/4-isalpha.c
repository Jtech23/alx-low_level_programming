#include "main.h"
/**
 * _isalpha - Checks if c is a letter or not
 * @c: ASCII code to check
 * Return: Returns 1 if letter and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
	_putchar('\n');
}

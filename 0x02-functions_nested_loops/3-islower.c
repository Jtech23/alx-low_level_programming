#include "main.h"

/**
 * _islower - Checks if a char is lower case or not
 * @c: Charcater to check for case
 * Return: Returns 1 if char is lower and 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');

}

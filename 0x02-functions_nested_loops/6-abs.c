#include "main.h"
/**
 * _abs - Prints the absolut value of integer
 * @i: Value to check
 * Return: Always 0
 */

int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i == 0)
		return (i);
	else
		return (-i);
}

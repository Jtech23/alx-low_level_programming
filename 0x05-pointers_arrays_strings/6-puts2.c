#include "main.h"
/**
 * puts2 - Prints character of a string
 * @str: String to print
 * Return: Always 0
 */

void puts2(char *str)
{
	int i, j, k;
	char *s = str;

	i = 0;
	j = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	j = i - 1;
	for (k = 0; k <= j; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}

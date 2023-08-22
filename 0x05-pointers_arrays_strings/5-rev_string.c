#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: stsring to be reversed
 * Return: Always 0
 */

void rev_string(char *s)
{
	int i;
	char rev;
	int c;

	i = 0;
	rev = s[0];
	while (*s != '\0')
	{
		i++;
	}
	for (c = 0; c < i; c++)
	{
		i--;
		rev = s[c];
		s[c] = s[i];
		s[i] = rev;
	}
}

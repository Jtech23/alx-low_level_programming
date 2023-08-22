#include <stdio.h>
#include <string.h>
/**
 * print_rev - Prints in reverse
 * @s: Input character
 * Return: Always 0
 */

void print_rev(char *s)
{
	int i;
	int len;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

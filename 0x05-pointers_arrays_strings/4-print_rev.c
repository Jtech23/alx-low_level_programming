#include <stdio.h>
#include <string.h>
/**
 * print_rev: print in reverse
 *
 * @str: character to be printed in reverse
 */

void print_rev(char *str)
{
	int len;
	int i;

	len = strlen(str);
	for (i = len - 1; i >= 0; i--)
	{
		puts(str[i]);
	}
}

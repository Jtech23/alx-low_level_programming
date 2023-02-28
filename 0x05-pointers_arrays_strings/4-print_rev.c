#include <stdio.h>
#include <string.h>
/**
 * print_rev: prints in reverse
 * @s: character to be printed in reverse
 */

void print_rev(char *str)
{
	int len;
	int i;

	len = strlen(str);
	for (i=len - 1; i >= 0; i--)
	{
		putchar(str[i]);
	}
}

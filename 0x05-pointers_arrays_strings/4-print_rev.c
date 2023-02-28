#include <stdio.h>
#include <string.h>
/**
 *A functio to print in reverse
 *
 * print_rev: print in reverse
 *
 * @str: character to be printed in reverse
 */

void print_rev(char *str)
{
	int len;
	int i;
	int j;

	len = strlen(str);
	for (i = len - 1; i >= 0; i--)
	{
		j = str[i];
		putchar(j);
	}
	putchar(' ');
}

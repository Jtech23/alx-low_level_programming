#include <stdio.h>
#include <string.h>
/**
 * print_rev -  print in reverse
 * @str: character to be printed in reverse
 * return: 0
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
	putchar('\n');
}

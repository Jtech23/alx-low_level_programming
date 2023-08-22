#include <stdio.h>
/**
 * _puts - Prints a string followed by anew line
 * @str: Input
 * Return: Always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar (*str);
		str++;
	}
	putchar ('\n');
}

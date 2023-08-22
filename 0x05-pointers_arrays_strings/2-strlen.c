#include <stdio.h>
/**
 * _strlen - Returns the length of a string
 * @s: Char input
 * Return: Always 0
 */

int _strlen(char *s)
{
	int num;

	num = 0;
	while (*s != '\0')
	{
		num++;
		s++;
	}
	return (num);
}

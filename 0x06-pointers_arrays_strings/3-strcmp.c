#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: STring ont to copare
 * @s2: String 2 to comapre
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	j = 0;
	for (i = 0; s1[i] != '\0' && j == 0; i++)
	{
		j = s1[i] - s2[i];
	}
	return (j);
}

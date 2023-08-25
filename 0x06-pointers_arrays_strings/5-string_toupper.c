#include "main.h"
/**
 * string_toupper - Chamges lower case to upper case
 * @i: Lower case to be changes
 * Return: Always 0
 */

char *string_toupper(char *i)
{
	int j;

	for (j = 0; i[j] != '\0'; j++)
	{
		if (i[j] >= 'a' && i[j] <= 'z')
		{
			i[j] = i[j] - 32;
		}
	}
	return (i);
}

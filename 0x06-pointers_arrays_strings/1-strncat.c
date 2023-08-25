#include "main.h"
/**
 * _strncat - Concatinates two strings
 * @dest: First string
 * @src: second string
 * @n: Numver to iterate with
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	dest_len = 0;
	i = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[i] != 0 && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	return (dest);
}

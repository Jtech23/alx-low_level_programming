#include "main.h"
/**
 * _strncpy - Copy a atring
 * @dest: first string
 * @src: second string
 * @n: Number to concatenate
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		i++;
		dest[i] = '\0';
	}
	return (dest);
}

#include "main.h"
/**
 * _strcat - Concatenates two strings together
 * @dest: string 1
 * @src: String 2
 * Return: Alwasy 0
 */

char *_strcat(char *dest, char *src)
{
	int dest_len, src_len, i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	while (i <= src_len)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	return (dest);

}

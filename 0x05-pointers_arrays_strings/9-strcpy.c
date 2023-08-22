#include "main.h"
/**
 * _strcpy - Copies striung with the null
 * @src: String pointd to by src
 * @dest: ok
 * Return: Always 0
 */

char *_strcpy(char *dest, char *str)
{
	int j, k;

	j = 0;
	k = 0;
	while (*(src + j) != '\0')
	{
		j++;
	}
	for (;k < j; k++)
	{
		dest[k] = src[k];
	}
	dest[j] = '\0';
	return(dest);
}

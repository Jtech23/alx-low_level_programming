#include "main.h"
/**
 * _memset(char *s, char b, unsigned int n) - fills memeory with
 * a constant byte
 * @s: memroy area
 * @n: Nu,ber of byte
 * @b: Byte itself
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

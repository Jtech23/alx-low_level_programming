#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Returns a poibter toi a newly alocated
 * @str: string
 * Return: ALWAYS 0
 */

char *_strdup(char *str)
{
	char *pointer = (char *)malloc(sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	pointer[0] = *str;
	return (*pointer);
}

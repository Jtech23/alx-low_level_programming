#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argv: argument vector
 * @argc: argument count
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}

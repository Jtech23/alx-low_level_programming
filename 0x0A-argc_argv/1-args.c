#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument variable
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (*argv)
	{
		printf("%d\n", argc);
	}
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 * @argv: Argument variable
 * @argc: Argument count
 * Return: Alwys 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

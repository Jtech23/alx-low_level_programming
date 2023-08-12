#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the alphabet
 * Return: Always 0
 */

int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

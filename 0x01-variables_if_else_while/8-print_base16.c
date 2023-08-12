#include <stdio.h>
/**
 *main - Entry point
 *Desription: Prints all digits of base 16 in lower case
 *Return: Always 0
 */

int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	for (a = 97; a <= 102; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

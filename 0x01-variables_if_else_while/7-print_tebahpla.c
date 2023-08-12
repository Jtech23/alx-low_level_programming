#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints lower case alphabet in reverse form
 * Return: Always 0
 */

int main(void)
{
	int a;

	for (a = 122; a >= 97; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

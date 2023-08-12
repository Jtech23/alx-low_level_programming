#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints alphabet in lower and upper case
 * Return: Always 0
 */

int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	for (a = 65; a <= 90; a++)
	{
		putchar(a);
	}
	putchar ('\n');
	return (0);
}

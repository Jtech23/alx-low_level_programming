#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			if (a >= b)
				continue;
			putchar(a);
			putchar(b);
			if (a == 56 && b == 57)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

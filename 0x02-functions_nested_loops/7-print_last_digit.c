#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: Number to print its last digit
 * Return: Returns the last digit of the number
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar(-(n % 10) + 48);
		return (-(n % 10));
	}
	else
	{
		_putchar((n % 10) + 48);
		return (n % 10);
	}
}

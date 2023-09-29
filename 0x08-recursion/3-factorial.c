#include "main.h"
/**
 * factorial - prints the factorial of a number
 * @n: number to chacks its factorial
 * Return: returns the factorial of a given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * (factorial(n - 1)));
}

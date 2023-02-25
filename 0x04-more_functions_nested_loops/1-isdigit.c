#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
        if (c >= '0'&& c <= '9')
        {
                return (1);
        }
        else
        {
                return(0);
        }
}

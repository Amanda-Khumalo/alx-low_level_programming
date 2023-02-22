#include "main.h"

/**
 * _abs - Computes the alphabet value of an integer
 * @t: The integer to be computed
 * Return: The absolute value
 */

int _abs(int t)
{
	if (t > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (t < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

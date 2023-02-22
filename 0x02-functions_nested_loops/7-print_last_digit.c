#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 * @n: the number
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int lDigit;

	lDigit = r % 10;
	if (lDigit < 0)

	{
		lDigit *= -1;
	}

	_putchar(lDigit + '0');
	return (lDigit);

}

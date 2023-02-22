#include "main.h"

/**
 * _abs - check absolute value of an integer
 * @r: The integer to be computed
 * Return: 0
 */

int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else if (r < 0)
	{
		return (r * -1);
	}
	else
	{
		return (r);
	}
		return (0);
}

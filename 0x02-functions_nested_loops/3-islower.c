include "main.h"

/**
 * _islower - checks is a character is lower
 * @c: the character
 * Return: 1 if letter is lower, 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

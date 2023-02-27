#include <stdio.h>

/**
 * _strlen - returns the leangth of a string
 * @str: string
 * Return: length
 */

int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}

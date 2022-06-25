#include "main.h"

/**
 * _strlen - This function returns the length of a string.
 * @s: string.
 *
 * Return: Length.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

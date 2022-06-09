#include "main.h"

/**
 * _isdigit - This functions that checks for a digit 0-9
 * @c: is the character
 *
 * Return: 1 if c is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

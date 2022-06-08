#include "main.h"
/**
 * print_alphabet_x10 - This funiction prints 10 times
 * the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet_x10(void)
{
	char a, b;

	for (a = 0; b <= 9; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}
}

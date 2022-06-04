#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Display possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = '0'; num < '10'; num++)
	{
		putchar((num % '10') + '0');
	} if (num < '9')
	{
		putchar(',');
		putchar(' ');
	} else
	{
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

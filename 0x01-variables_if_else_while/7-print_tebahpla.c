#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - To print lowercase alphabeths in reverse order
 * Return: Always 0 (Success)
 */
int main(void)
{ 
	char letter;
	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

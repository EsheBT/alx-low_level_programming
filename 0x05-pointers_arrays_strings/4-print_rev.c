#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * temp is to first count to end, r is to count back
 * @s: str input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int temp = 0;
	int i, r;

	for (i = 0; s[i] != '\0'; i++)
	{
		temp++;
	}

	for (r = (temp - 1); r >= 0; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9 followed by newline
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
		_putchar(x + '0');
	_putchar('\n');
}

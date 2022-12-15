#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line in the terminal
 * @r: input number of times to print '_'
 * Return: a diagonal line
 */
void print_diagonal(int r)
{
	int start, eshetu;

	if (r <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (start = 1; start <= r; start++)
		{
			for (eshetu = 1; eshetu < start; eshetu++)
			{
				_putchar(' ');
			}
				_putchar('\');
				_putchar('\n');
		}
	}
}


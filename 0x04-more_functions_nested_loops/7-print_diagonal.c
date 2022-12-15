#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @r: input number of times to print '_'
 * Return: a straight line
 */
void print_line(int r)
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
		}
				_putchar('\n');
	}
}


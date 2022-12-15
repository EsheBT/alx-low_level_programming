#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @r: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int r)
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
			_putchar('#');
			for (eshetu = 2; eshetu <= r; eshetu++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

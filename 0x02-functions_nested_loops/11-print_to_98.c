#include "main.h"
/**
 * print_to_98 - prints numbers from n to 98
 *
 * @number:  input
 * Return: Always 0 (Success)
 */
void print_to_98(int number)
{
	if (number < 98)
	{
		while (number <= 98)
		{
			_putchar("%d", number);
			if (number != 98)
			{
				_putchar(", ");
			}
			number++;
		}
	}
	else if (number > 98)
	{
		while (number >= 98)
		{
			_putchar("%d", number);
			if (number != 98)
			{
				_putchar(", ");
			}
			number--;
		}
	}
	else
	{
		_putchar("98");
	}
	_putchar("\n");
}

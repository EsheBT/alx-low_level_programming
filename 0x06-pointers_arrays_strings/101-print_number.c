#include "main.h"

/**
 *  print_number - print a number.
 * @n : the number
 * Return :  void
 */


void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if ((n / 10) == 0)
		_putchar(n + '0');
	else
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
}


#include "main.h"
/**
 * print_last_digit - entry point
 * @n: The number to be checked
 * Discription: print last digit of a number
 * Return: (0) success
 */

int print_last_digit(int n)
{
	int rem;

	rem = n % 10;
	if (rem < 0)
		rem *= -1;
	_putchar(rem + '0');
	return (rem);
}

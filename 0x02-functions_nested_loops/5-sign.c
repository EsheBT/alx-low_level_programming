#include "main.h"
/**
 * print_sign- entry point
 * @n: The letter to be checked
 * Discription: check number is +ve or -ve
 * Return: (0) success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

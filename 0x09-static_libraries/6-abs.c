#include "main.h"
/**
 * _abs - entry point
 * @n: The number to be checked
 * Discription: abs value of a number
 * Return: (0) success
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}

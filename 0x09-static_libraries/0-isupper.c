#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @j: input
 * Return: 1 if j is uppercase, 0 otherwise
 */
int _isupper(int j)
{
	if ((j >= 'A') && (j <= 'Z'))
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 * _islower - entry point
 * @c: The letter to be checked
 * Discription: check is lower letter
 * Return: (0) success
 */

char _islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}


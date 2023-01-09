#include "main.h"
/**
 * _islower - entry point
 * @c: The letter to be checked
 * Discription: check is lower letter
 * Return: (0) success
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

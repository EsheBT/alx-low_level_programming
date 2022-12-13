#include "main.h"
/**
 * _isalpha - primary function
 * @c: The letter to be checked
 * Discription: check is lower letter
 * Return: return 1 if true or 0 if false
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

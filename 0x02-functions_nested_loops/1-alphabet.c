#include "main.h"
/**
 * print_alphabet - entry point
 * Discription: printing lower case alphabets
 * Return: (0) success
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}


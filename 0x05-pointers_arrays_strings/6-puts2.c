#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @s: input
 * Return: print
 */
void puts2(char *s)
{
	int a = 0;

	for (; s[a] != '\0'; a++)
	{
		if ((a % 2) == 0)
			_putchar(s[a]);
		else
			continue;
	}
	_putchar('\n');
}

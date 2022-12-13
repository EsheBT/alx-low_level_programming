#include "main.h"
/**
 * times_table - entry point
 * Discription: printing 9 time table
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <=  9; j++)
		{
			_putchar((i * j) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
		}
	}
}

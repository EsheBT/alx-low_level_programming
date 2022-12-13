#include "main.h"
/**
 * print_to_98 - prints numbers from n to 98
 *
 * @number:  input
 * Return: Always 0 (Success)
 */
void print_to_98(int number)
{
	if (number < 98)
	{
		while (number <= 98)
		{
			printf("%d", number);
			if (number != 98)
			{
				printf(", ");
			}
			number++;
		}
	}
	else if (number > 98)
	{
		while (number >= 98)
		{
			printf("%d", number);
			if (number != 98)
			{
				printf(", ");
			}
			number--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}

#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * user input's number prints to 98, regardless < 98 or > 98
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

#include "main.h"

/**
 * rev_string - a function that a reverse a string
 * temp is a variable to hold the string temporary
 * @str1: str input
 * Return: string in reverse
 */
void rev_string(char *str1)
{
	static int i, len, temp;

	len = strlen(str1);

	if (i < len / 2)
	{
		temp = str1[i];
		str1[i] = str1[len - i - 1];
		str1[len - i - 1] = temp;
		i++;
		rev_string(str1);
	}
}


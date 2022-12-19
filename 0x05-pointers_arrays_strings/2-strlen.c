#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int j = 1, result = 0;
	char kl = s[0];

	while (kl != '\0')
	{
		result++;
		kl = s[j++];
	}
	return (result);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates a string into newly allocated array
 *
 * @str: string to duplicate
 *
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	int size = 0;
	char *pointer, *new;

	if (!str)
		return (NULL);

	pointer = str;
	while (*pointer++)
		size++;

	new = malloc(size + 1);
	if (!new)
		return (NULL);

	pointer = new;
	while (*str)
		*pointer++ = *str++;

	*pointer = 0;
	return (new);
}

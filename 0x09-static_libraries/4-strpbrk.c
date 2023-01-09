#include "main.h"

/**
 * _strpbrk - prints the consecutive caracters of s1 that are in s2.
 * @s: source string
 * @accept: searching string
 *
 * Return: new string.
 */
char *_strpbrk(char *s, char *accept)
{

	int index;

	while (*s)
	{

		for (index = 0; accept[index]; index++)
		{

			if (*s == accept[index])
				return (s);

		}

		s++;

	}

	return ('\0');

}

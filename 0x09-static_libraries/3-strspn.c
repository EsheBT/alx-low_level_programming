#include "main.h"
/**
 * _strspn - prints the consecutive caracters of s1 that are in s2.
 * @s: source string
 * @accept: searching string
 *
 * Return: new string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{

		for (index = 0; accept[index]; index++)
		{

			if (*s == accept[index])
			{
				bytes++;
				break;

			}

			else if (accept[index + 1] == '\0')
				return (bytes);

		}

		s++;

	}

	return (bytes);

}

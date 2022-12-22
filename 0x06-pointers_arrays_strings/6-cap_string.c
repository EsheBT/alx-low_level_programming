#include "main.h"
/**
 * cap_string - change lowercase letters to uppercase of a word
 * @c: character.
 *
 * Return: String with all first letters of a word Uppercased.
 */
char *cap_string(char *c)
{
	int i, j;

	int separator[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;
	while (*(c + i) != '\0')
	{
		if (*(c + i) >= 'a' && *(c + i) <= 'z')
		{
			if (i == 0)
			{
				*(c + i) = *(c + i) - 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (separator[j] == *(c + i - 1))
					{
						*(c + i) = *(c + i) - 32;
					}
				}
			}
		}
	i++;
	}
	return (c);
}


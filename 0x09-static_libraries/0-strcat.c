#include "main.h"

/**
 * _strcat-function that concatenate two strings
 *
 * @s1: first string input
 * @s2:second string
 *
 * Return: always 0
 */

char *_strcat(char *s1, char *s2)
{
int i, j;
for (i = 0; s1[i] != '\0'; i++)
for (j = 0; s2[j] != '\0'; j++)
{
	s1[i] = s2[j];
		i++;
}
s1[i] = '\0';
return (s1);
}

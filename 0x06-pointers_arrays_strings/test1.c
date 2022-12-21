#include "main.h"
#include <stdio.h>

/**
 * _strcat-function that concatenate two strings
 *
 * @s1: first string input
 * @s2:second string
 * main - check the code
 *
 * Return: Always 0.
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

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";

    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s", s1);
    printf("%s", s2);
    return (0);
}

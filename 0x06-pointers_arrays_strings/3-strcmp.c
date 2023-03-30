#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Return: An integer less than, equal to, or greater than zero, indicating the
 *         relative order of the two strings.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] == s2[i])
{
if (s1[i] == '\0')
{
return (0);
}
i++;
}

return (s1[i] - s2[i]);
}

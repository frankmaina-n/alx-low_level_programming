#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be capitalized
 *
 * Return: a pointer to the resulting string
 */
char *cap_string(char *str)
{
char separators[] = " \t\n,.!?\"(){};";
int i, j;

if (str[0] >= 'a' && str[0] <= 'z')
str[0] -= 32;

for (i = 1; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
for (j = 0; separators[j] != '\0'; j++)
{
if (str[i - 1] == separators[j])
{
str[i] -= 32;
break;
}
}
}
}

return (str);
}

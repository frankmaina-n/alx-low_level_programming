#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @s: input string
 *
 * Return: encoded string
 */
char *leet(char *s)
{
char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (s[i] == letters[j])
{
s[i] = numbers[j];
break;
}
}
}

return (s);
}

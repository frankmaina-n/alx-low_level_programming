#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line
 * @str: The string to print the second half of
 *
 * Return: void
 */
void puts_half(char *str)
{
int length = 0;
int i, start_index;

/* Find the length of the string */
while (str[length] != '\0')
length++;

/* Determine the start index of the second half of the string */
if (length % 2 == 0)
start_index = length / 2;
else
start_index = (length - 1) / 2 + 1;

/* Print the second half of the string */
for (i = start_index; i < length; i++)
putchar(str[i]);

/* Print a new line character */
putchar('\n');
}

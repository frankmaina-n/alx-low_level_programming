#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers, followed by a new line
 *
 * @a: The array to print elements from
 * @n: The number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
int i;

/* Print each element of the array */
for (i = 0; i < n; i++)
{
printf("%d", a[i]);

/* Add a comma and space for all but the last element */
if (i != n - 1)
printf(", ");
}

/* Print a new line character */
printf("\n");
}

#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max (inclusive)
 * @min: the minimum value to include in the array
 * @max: the maximum value to include in the array
 *
 * Return: If successful, pointer to the newly created array, otherwise NULL
 */
int *array_range(int min, int max)
{
int *arr, i, size;

if (min > max)
return (NULL);

size = max - min + 1;
arr = malloc(sizeof(int) * size);
if (!arr)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = min + i;

return (arr);
}

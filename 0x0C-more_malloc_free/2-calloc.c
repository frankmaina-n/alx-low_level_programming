#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of elements
 * @nmemb: number of elements to allocate memory for
 * @size: size of each element
 *
 * Return: pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
char *tmp;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);

tmp = ptr;
for (i = 0; i < (nmemb * size); i++)
tmp[i] = 0;

return (ptr);
}

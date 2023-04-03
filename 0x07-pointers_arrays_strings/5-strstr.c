#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string to search.
 * @needle: Pointer to the substring to locate.
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
char *haystack_ptr, *needle_ptr;

while (*haystack != '\0')
{
haystack_ptr = haystack;
needle_ptr = needle;

while (*haystack_ptr == *needle_ptr && *needle_ptr != '\0'
&& *haystack_ptr != '\0')
{
haystack_ptr++;
needle_ptr++;
}

if (*needle_ptr == '\0')
return (haystack);

haystack++;
}

return (NULL);
}

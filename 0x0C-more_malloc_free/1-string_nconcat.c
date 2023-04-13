#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes of s2 to concatenate
 *
 * Return: a pointer to the newly allocated space in memory, which contains s1,
 *         followed by the first n bytes of s2, and null terminated,
 *         or NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1_len, s2_len, copy_len;
char *concat;

s1 = (s1 == NULL) ? "" : s1;
s2 = (s2 == NULL) ? "" : s2;

s1_len = strlen(s1);
s2_len = strlen(s2);

copy_len = (s2_len >= n) ? n : s2_len;

concat = malloc(sizeof(char) * (s1_len + copy_len + 1));

if (concat == NULL)
return (NULL);

memcpy(concat, s1, s1_len);
memcpy(concat + s1_len, s2, copy_len);
concat[s1_len + copy_len] = '\0';

return (concat);
}

#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *
 * @dest: The buffer to copy the string to
 * @src: The string to copy
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;

/* Copy the string character by character */
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}

/* Copy the null terminator */
dest[i] = '\0';

/* Return a pointer to the beginning of the dest string */
return (dest);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - checks if a string contains only digits
 *
 * @s: the string to check
 *
 * Return: 1 if @s contains only digits, 0 otherwise
 */
int is_positive_number(char *s)
{
int i = 0;

while (s[i] != '\0')
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}

/**
 * main - adds positive numbers
 *
 * @argc: the number of arguments passed to the program
 * @argv: an array containing the arguments passed to the program
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char **argv)
{
int sum = 0, i;

for (i = 1; i < argc; i++)
{
if (is_positive_number(argv[i]))
sum += atoi(argv[i]);
else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", sum);

return (0);
}

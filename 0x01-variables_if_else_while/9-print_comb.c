#include <stdio.h>

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');  /* print the digit */

		if (num != 9)  /* if it's not the last digit */
		{
			putchar(',');  /* print comma */
			putchar(' ');  /* print space */
		}

		num++;  /* move to the next digit */
	}
	putchar('\n');  /* print newline */
	return (0);
}

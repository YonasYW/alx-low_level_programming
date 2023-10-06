#include <stdio.h>

/**
 * main - print pairs of double digit combos
 *
 * Description: print pairs of double digit combos
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j;

	i = 0;
	while (i < 100)
		{
		j = i + 1;
		while (j < 100)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');

				putchar(' ');

				putchar(j / 10 + '0');
				putchar(j % 10 + '0');

				if (i != 99 || j != 99)
					{
						putchar(',');
						putchar(' ');
					}

			j++;
			}
		i++;
		}

	putchar('\n');

	return (0);
}

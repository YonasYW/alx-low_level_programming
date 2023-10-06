#include <stdio.h>

/**
 * main - print double digit combos
 *
 * Description: print double digit combos
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	i = 0;
	j = 1;

	while (i < 9)
	{
	while (j <= 9)
	{ 
	putchar(i + '0');
	putchar(j + '0');

	if (i != 8 || j != 9)
		{
		putchar(',');
		putchar(' ');
		}

	j++;
	}

	i++;
	j = i + 1;
	}

	putchar('\n');

	return 0;
}

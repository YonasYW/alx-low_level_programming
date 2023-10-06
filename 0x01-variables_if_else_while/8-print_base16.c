#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 0;

	while (i < 16)
	{
		if (i < 10) {
	putchar('0' + i);
	} else {
		putchar('a' + i - 10);
    }
	i++;
	}

	putchar('\n');

	return (0);
}

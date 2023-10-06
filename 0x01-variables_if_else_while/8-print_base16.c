#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: prints all the numbers of base 16 in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 0;

	while (i < 16)
	{
	putchar('0' + i);
	i++;
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet in lower then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	// Print lowercase alphabet
	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);

	// Print uppercase alphabet
	for (letter = 'A'; letter <= 'Z'; letter++)
	putchar(letter);

	putchar('\n');

	return (0);
}

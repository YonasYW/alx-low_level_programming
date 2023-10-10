#include <unistd.h>

/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */

void print_alphabet(void)
	_putchar(letter);
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}

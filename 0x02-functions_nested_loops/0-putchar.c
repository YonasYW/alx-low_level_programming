#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main()
{
	const char* message = "_putchar\n";
	write(1, message, sizeof("_putchar\n") - 1);
	return (0);
}

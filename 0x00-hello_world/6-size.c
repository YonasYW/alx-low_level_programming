#include <stdio.h>

/**
 * main - print the size of various types
 *
 * Description: prints the size of various types on the computer it is compiled
 * and run on
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("size of a char: %lu byte(s)\n", (int) sizeof(char));
	printf("size of a int: %lu byte(s)\n", (int) sizeof(int));
	printf("size of a long int: %lu byte(s)\n", (int) sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", (int) sizeof(long long int));
	printf("size of a float: %lu byte(s)\n", (int) sizeof(float));

	return (0);
}

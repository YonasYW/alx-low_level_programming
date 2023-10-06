#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: print single digit numbers with commas
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
	putchar(i + '0');
        
        if (i != 9)
		{
		putchar(',');
		putchar(' ');
        	}
	}

	putchar('\n');

	return (0);
}

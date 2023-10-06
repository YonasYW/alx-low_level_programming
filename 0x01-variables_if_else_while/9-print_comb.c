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
	int i = 0;

	i < 10;
       
	while (i<10)
	{
	putchar(i);
        if (i != 9)
		{
		putchar(',');
		putchar(' ');
        	}
	i++;
	}

	putchar(10);

	return (0);
}

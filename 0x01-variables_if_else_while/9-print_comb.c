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

	i <= 9;
       
	while (i<=9)
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

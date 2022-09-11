#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * use the putchar function
 * Return: Always 0 (success!)
 */

int main(void)
{
	int low;

	for (low = 0; low <= 9; low++)
	{
		putchar(low + '0');
		if (low < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include  <time.h>
/**
 * main -  prints all possible different combinations of two digits
 *  use putchar
 *  Return: Always 0 (success!)
 */

int main(void)
{
	int b, c;

	for (b = 0; b <= 8; b++)
	{
		for (c = 1; c <= 9; c++)
		{
			if (b < c)
			{
				putchar(b + '0');
				putchar(c + '0');
				if (b != 8 || c != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

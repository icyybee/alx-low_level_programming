#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all possible different combinations of three digits
 *  use the putchar function
 *  Return: Always 0 (success!)
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			if (i < j)
			{
				for (k = 2; k <= 9; k++)
				{
					if (j < k)
					{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i != 7 || j != 8 || k != 9)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

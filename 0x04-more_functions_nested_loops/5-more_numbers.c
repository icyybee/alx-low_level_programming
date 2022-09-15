#include <stdio.h>
#include "main.h"

/**
 * more_numbers - check main
 * Description: function that prints 10 times the numbers, from 0 to 14
 * Return: Nothing
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
				_putchar(j % 10 + '0');
			j++;
		}
	printf("\n");
	}
}

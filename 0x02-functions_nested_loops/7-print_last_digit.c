#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Check main
 * @n: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number n
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		n = n * -1;

		_putchar(n % 10 + '0');
		return (n % 10);
	}
	else
	{
		_putchar(last + '0');
		return (last % 10);
	}
}

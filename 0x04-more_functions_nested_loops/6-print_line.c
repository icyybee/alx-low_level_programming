#include "main.h"

/**
 * print_line - check main
 * @n: an integer input
 * Description: function that draws a straight line
 * Return: Nothing
 */

void print_line(int n)
{
	int co;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (co = 0; co < n; co++)
	{
		_putchar('_');
	}
	_putchar('\n');
	}
}

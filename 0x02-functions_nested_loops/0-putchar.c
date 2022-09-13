#include "stdio.h"
/**
 * main - prints _putchar, followed by a new line
 * Return: Always 0 (success!)
 */

int main(void)
{
	int i = 0;
	char str_put[8] = "_putchar";

	while (i < 8)
	{
		putchar(str_put[i]);
		i += 1;
	}
	_putchar('\n');
	return (0);
}

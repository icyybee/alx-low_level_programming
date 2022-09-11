#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * use the putchar function
 * Return: Always 0 (success!)
 */

int main(void)
{
	char low;
	char row;

	row = 'a';
	for (low = 0; low < 10; low++)
	{
		putchar(low + '0');
	}
	for (low = 10; low <= 15; low++)
	{
		putchar(row);
		row++;
	}
	putchar('\n');
	return (0);
}

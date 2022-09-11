#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the lowercase alphabet in reverse
 *  use the putchar function
 *  Return: Always 0
 */

int main(void)
{
	char low;

	low = 'z';
	while (low >= 'a')
	{
		putchar(low);
		low--;
	}
	putchar('\n');
	return (0);
}

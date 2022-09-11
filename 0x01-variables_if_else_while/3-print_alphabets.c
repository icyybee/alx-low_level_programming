#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -prints alphabet in lowercase, and then in uppercase
 * You can only use the putchar
 * Return: Always 0(success!)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}

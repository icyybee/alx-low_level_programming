#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point prints the alphabet in lowercase, followed by a new line.
 * You can only use the putchar
 * Return: Always 0 (Success!)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}

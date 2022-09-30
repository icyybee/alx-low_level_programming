#include <stdio.h>
#include "main.h"

/**
 * main - prints its name
 * @argc: the number of arguments passed
 * @argv: arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignored*/
	printf("%i\n", argc - 1);

	return (0);
}

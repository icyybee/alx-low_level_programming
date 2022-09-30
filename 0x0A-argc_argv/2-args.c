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
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
				count++;
		}
	}
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * _isupper - check main
 * @c: an integer input n
 * Description: function that checks for uppercase character
 * Return: 1 or 0
 */

int _isupper(int c)
{
	char ch;
	int n = 0;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (ch == c)
		{
			n = 1;
			break;
		}
	}
	return (n);
}

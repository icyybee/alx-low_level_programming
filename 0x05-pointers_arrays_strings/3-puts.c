#include "main.h"

/**
 * _puts - prints string
 * @str: input string
 * Return: no return
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_puts(*str);
		str++;
	}
	_puts('\n');
}

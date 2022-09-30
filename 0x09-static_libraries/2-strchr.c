#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @c: the character to be searched for
 * @s: the string to be searched through
 * Return: a pointer to the first occurrence of c in s
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
		if (!*s++)
			return (0);
	return (s);
}

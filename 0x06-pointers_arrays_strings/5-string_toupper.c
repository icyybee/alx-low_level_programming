#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *  @s: the string given as argument
 *  Return: char *
 */

char *string_toupper(char *s)
{
	int bet, b;

	for (bet = 0; s[bet] != '\0'; bet++)
		;

	for (b = 0; b < bet; b++)
		if (s[b] >= 97 && s[b] <= 122)
			s[b] -= 32;
	return (s);
}

#include "main.h"

/**
 * _strncat - concatenates n number of characters
 * from src to dest
 * @dest: destination string
 * @src: the source to be concatenated
 * @n: the number of bytes of src to be concatenated.
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int bet;
	char *prt;

	for (bet = 0; dest[bet] != '\0'; bet++)
		;
	prt = dest + bet;
	while (*src != '\0' && n--)
		*prt++ = *src++;

	*prt = '\0';
	return (dest);
}

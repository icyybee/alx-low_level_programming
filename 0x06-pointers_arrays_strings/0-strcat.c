#include "main.h"

/**
 * _strcat -  appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end
 * of dest and adds a terminating null byte
 * @dest: the destination
 * @src: the source to be concatenated to dest
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int bet = 0;
	char *cpy;

	for (; dest[bet] != '\0'; bet++)
		;

	cpy = dest + bet;
	while (*src != '\0')
		*cpy++ = *src++;
	*cpy = '\0';

	return (dest);
}

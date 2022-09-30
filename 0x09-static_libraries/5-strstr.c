#include "main.h"

/**
 * _strstr -  locates first occurrence of the substring needle in "haystack"
 * @haystack: string to be scanned
 * @needle: substring to be searched for
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *str1, *str2;

	while (*haystack)
	{
		str1 = haystack;
		str2 = needle;

		while (*haystack && *str2 && *haystack == *str2)
		{
			haystack++;
			str2++;
		}

		if (!*str2)
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}

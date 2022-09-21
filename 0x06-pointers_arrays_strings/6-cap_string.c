#include "main"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to be manipulated
 * Return: s
 */

char *cap_string(char *s)
{
	int bet, b;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

		for (bet = 0; s[bet] != '\0'; bet++)
		{
			if (bet == 0 && s[bet] >= 97 && s[bet] <= 122)
				s[bet] -= 32;

			for (b = 0; b < 13; b++)
				if (s[bet] == sep[b])
					if (s[bet + 1] >= 97 && s[bet + 1] <= 122)
						s[bet + 1] -= 32;
		}
		return (s);
}

#include <unistd.h>
#include <main.h>
/**
 * main - prints _putchar, followed by a new line
 * Return: Always 0 (success!)
 */

main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[1]);
	}
	_putchar('\n');
	return (0);
}
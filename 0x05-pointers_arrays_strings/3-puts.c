#include "main.h"

/**
 * _puts - prints the specified string to stdout
 * @str: pointer to the string to be printed
 */
void _puts(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}

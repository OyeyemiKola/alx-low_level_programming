#include <stdio.h>
#include "main.h"
/**
 * main - it prints out a string followed by a new line.
 * @s - the string to be put to std output
 * Return: 0 always
 */

void _puts_recursion(char *s)
{
	while(*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion( s + 1);
}


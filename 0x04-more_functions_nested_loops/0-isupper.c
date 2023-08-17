#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main - checks to see if Char C is Capital or not
 *
 * Return: 0 Always
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}

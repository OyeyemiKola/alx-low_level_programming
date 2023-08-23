#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *
 *
 */

int _strlen(char *s)
{
	int strcnt;

	for (strcnt = 0; s[strcnt] != '\0'; ++strcnt);

	return strcnt;
}

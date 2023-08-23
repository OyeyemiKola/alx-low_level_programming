#include "main.h"
#include <stdio.h>

/**
 * main - swap the value of int a and b
 *
 * @a
 * @b
 *
 * Return - Program does not return
 */

void swap_int(int *a, int *b)
{
	int swap;
	swap = *a;

	*a = *b;

	*b = swap;
}

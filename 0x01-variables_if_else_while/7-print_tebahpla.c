/*
 * File: 7-print_tebahpla.c
 * Function: prints the alphbet in reverse
 * Auth: Kolawole Oyeyemi
 *
 */

#include <stdio.h>

/**
 * main - This is the main codeblock where the function will run.
 *
 * Return: 0 Successful.
 *
 */


int main(void)
{
	char alph;

	alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}

	putchar('\n');
	return (0);
}

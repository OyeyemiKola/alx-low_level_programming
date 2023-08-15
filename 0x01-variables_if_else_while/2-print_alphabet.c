/*
 * File: 2-print_alphabet.c
 * Function: prints the alphbet in small letters
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

	alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}

	putchar('\n');
	return (0);
}

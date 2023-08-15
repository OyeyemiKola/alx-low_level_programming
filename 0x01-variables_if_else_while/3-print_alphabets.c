/*
 * File: 2-print_alphabetc
 * Function: prints the alphbet in small letters and capital after
 * Auth: Kolawole Oyeyemi
 *
 */

#include <stdio.h>
#include <ctype.h>
/**
 * main - This is the main codeblock where the function will run.
 *
 * Return: 0 Successful.
 *
 */


int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);

	for (alph = 'A'; alph <= 'Z'; alph++)
		putchar(alph);

	putchar('\n');

	return (0);
}

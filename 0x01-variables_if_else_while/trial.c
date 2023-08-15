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
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
	

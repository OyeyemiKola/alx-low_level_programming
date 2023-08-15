/*
 * File : 1-last_digit.c
 * Auth : Kolawole Oyeyemi
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Prints a random number and states whether
 *        it is greater than 5 0r less, or 0.
 *
 * Return: Always 0.
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	int y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	 
       	y = n % 10;

	if (n % 10 > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, y);
	}
	else if (n % 10 == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, y);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, y);
	}

	return (0);
}

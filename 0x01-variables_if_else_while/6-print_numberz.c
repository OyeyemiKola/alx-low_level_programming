#include <stdio.h>

/**
 * main - this code prints out 0-9 using putchar
 *
 * Return: 0 succesful
 *
 */

int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}

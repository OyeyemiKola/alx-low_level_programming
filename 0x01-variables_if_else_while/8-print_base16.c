#include <stdio.h> 

/** 
 * main - this code prints hexadecimal 0-f
 *
 * Return: 0 Succesful
 *
 * Auth: Kolawole Oyeyemi
 */ 


int main(void)
{
	int num;
	char hexa;

	num = '0';

	hexa = 'a';

	for (num <= '9'; num++;)
		putchar(num);

	for (hexa <= 'f'; hexa++;)
                putchar(hexa);

	putchar('\n');
	
	return (0);
}

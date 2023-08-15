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



	for (num = '0'; num <= '9'; num++;)
		putchar(num);

	for (hexa = 'a'; hexa <= 'f'; hexa++);
                putchar(hexa);

	putchar('\n');
	
	return (0);
}

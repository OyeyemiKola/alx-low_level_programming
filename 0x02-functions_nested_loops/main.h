#include <stdio.h>

/** 
 * main - stores some functions
 *
 * Return: Always 0 
 * headerfile
 */

int showPutchar(void)
{
  printf("_putchar\n");
        return (0);
}


/**
 * 1. I sometimes suffer from insomnia. 
 * And when I can't fall asleep, I play what I call the alphabet game
 */

int print_alphabet(void)
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



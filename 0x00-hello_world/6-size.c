#include <stdio.h>

/**
 * main - Main block / beginning of code
 * return: 0;
 * Code is working with no error
 *
 * This program would display the size of each datatype
 */


int main(void) /* main program */
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));

	return (0); /* it return 0 | code runs succesfully */
}

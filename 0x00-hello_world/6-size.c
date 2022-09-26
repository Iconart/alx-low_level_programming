#include <stdio.h>

/**
 * main - Entry point
 * Description: print the size of data type
 * Return - 0 if successful
 */

int main(void)
{
	/*size of evaluate data type*/
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of init: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	return (0);
}

#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: is always 0
 */

int main(void)
{
	char message[] = "_putchar";
	int count;
	int maxlength = 80;

	for (count = 0; count < maxlength; count++)
	{
		if (message[count] == '\0')
		{
			putchar('\n');
			break;
		}
		else
		{
			putchar(message[count]);
		}
	}
	return (0);
}

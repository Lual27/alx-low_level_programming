#include <stdio.h>
#include <ctype.h>

/**
 * main - Prints all the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int lower_x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		lower_x = tolower(x);
		putchar(lower_x);
	}
		putchar('\n');
	return (0);
}

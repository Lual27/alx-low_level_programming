#include <stdio.h>
/**
 * main - Entry point
 * Description: prints "The size of various types
 * Return: 0
 */

int main(void)
{
	char e;
	int f;
	long int b;
	long long int c;
	float d;

	printf("Size of a char: %d byte(s)\n", Sizeof(e));
	printf("Size of an int: %d byte(s)\n", Sizeof(f));
	printf("Size of a long int: %d byte(s)\n", Sizeof(b));
	printf("Size of a long long int: %d byte(s)\n", Sizeof(c));
	printf("Size of a float: %d byte(s)\n", Sizeof(d));
	
	return (0);
}



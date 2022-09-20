#include "main.h"

/**
 * _strlen - Length of a string
 * @s: Input char
 * Return: length of a string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}

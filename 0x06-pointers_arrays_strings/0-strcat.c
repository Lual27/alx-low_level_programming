#include "main.h"

/**
 * _strcat - functionn to concantenate two strings
 * @dest: parameter pointer to a char
 * @src: parameter pointer to a char
 *
 * Return: returns the value of dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}

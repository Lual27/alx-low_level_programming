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
	int i = 0; j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0');

	return (dest);
}
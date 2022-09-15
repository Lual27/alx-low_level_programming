/*
 * File: 4-isalpha.c
 * Auth: Deng L Manyang
 */

#include "main.h"

/**
 * _isalpha- checks if a character is an alphabet
 * @c: the character to be checked.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (0);

	else
		return (0);
}

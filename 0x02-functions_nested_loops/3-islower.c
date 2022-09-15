/*
 * File: 3-islower.c
 * Auth: Deng L Manyang
 */

#include "main.h"

/**
 * _islower - checks if a character is in lowercase
 * @c: the character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}

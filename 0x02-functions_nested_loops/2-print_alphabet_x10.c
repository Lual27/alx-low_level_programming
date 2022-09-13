/*
 * File: 2-print_alphabet_x10.c
 * Auth: Deng L Manyang
 */

#include "main.h"

/**
 * Description:  print_alphabet_x10.c - prints 10 times alphabet in lowercase
 *
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}

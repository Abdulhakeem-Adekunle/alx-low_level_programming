/*
 * File - 1-alphabet.c
 * Auth: Abdulhakeem A Yisa
 */

#include "main.h"

/**
 * print_alphabet - "Program that prints alphabet in lowercase"
 *
 * Return: Always 0.
 *
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}

/*
 * File: 2-print_alphabet_x10.c
 * Auth: Abdulhakeem A Yisa
 */

#include "main.h"

/**
 * print_alphabet_x10 - "Program that prints 10 times the alphabets
 * in lowercase, followed by a new line"
 *
 * Return: Always 0
 *
 */

void print_alphabet_x10(void)
{
	char a;
	int count = 0;

	while (count < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);

		_putchar('\n');
		count++;
	}
}

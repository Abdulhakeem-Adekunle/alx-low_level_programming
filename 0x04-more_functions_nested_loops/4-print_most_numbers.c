/*
 * File: 4-print_most_numbers
 * Auth: Abdulhakeem A Yisa
 */

#include "main.h"

/**
 * print_most_numbers - "function that prints numbers 0 to 9, excluding 2 & 4"
 *
 * Return: Always 0
 *
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}

		_putchar((num % 10) + '0');
	}
		_putchar('\n');
}

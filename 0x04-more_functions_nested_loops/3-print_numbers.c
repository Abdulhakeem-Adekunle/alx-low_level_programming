/*
 * File: 3-print_numbers.c
 * Auth: Abdulhakeem A Yisa
 */

#include "main.h"

/**
 * print_numbers - "Function that prints number (0 through 9)"
 *
 * Return: Always 0
 *
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	_putchar((num % 10) + '0');
	_putchar('\n');
}

/*
 * File: 7-print_last_digit.c
 * Auth: Abdulhakeem A Yisa
 */

#include "main.h"

/**
 * print_last_digit - "Function that prints the last digit of a number"
 * @d: function formal parameter
 *
 * Return: Always 0
 */

int print_last_digit(int d)
{
	int last_digit = d % 10;

	if (last_digit < 0)

		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}

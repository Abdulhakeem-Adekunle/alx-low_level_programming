/*
 * File: 6-print_line.c
 * Auth: Abdulhakeem A Yisa
 */

#include "main.h"

/**
 * print_line - "function that draws a straight line on the terminal"
 * @n: function formal parameter
 *
 * Return: Always 0
 *
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
		_putchar('\n');
}

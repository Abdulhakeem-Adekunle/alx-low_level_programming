/*
 * File: 8-print_square.c
 * Auth: Abdulhakeem A Yisa
 */

#include "main.h"

/**
 * print_square - "Function that prints a square, followed by a new line"
 * @size: funtion formal parameter
 *
 * Return: Always 0
 *
 */

void print_square(int size)
{
	int row, col;

	if (size > 0)
	{
		for (col = 1; col <= size; col++)
		{
		for (row = 1; row <= size; row++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

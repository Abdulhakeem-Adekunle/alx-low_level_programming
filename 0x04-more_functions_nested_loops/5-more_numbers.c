/*
 * File: 5-more_numbers.c
 * Auth: Abdulhakeem A Yisa
 */

#include "main.h"

/**
 * more_numbers - "function that prints 10 time the numbers, from 0 - 14
 * followed by a new line"
 *
 * Return: Always 0
 *
 */

void more_numbers(void)
{
	int num;
	int count;

	for (count = 0; count <= 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}

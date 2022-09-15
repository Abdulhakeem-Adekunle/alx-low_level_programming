/*
 * File: 11-print_to_98.c
 * Auth: Abdulhakeem A Yisa
 */

#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - "Function that prints natural numbers to 98
 * from whatever number that was passed to it"
 *
 * @n: function formal parameter
 *
 * Return: Always 0
 *
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

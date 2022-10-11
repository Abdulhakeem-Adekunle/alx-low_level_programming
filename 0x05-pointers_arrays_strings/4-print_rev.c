/*
 * File: 4-print_rev.c
 * Auth: Abdulhakeem A Yisa
 */

#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: formal function parameter
 *
 * Return: Nothing
 *
 */

void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}

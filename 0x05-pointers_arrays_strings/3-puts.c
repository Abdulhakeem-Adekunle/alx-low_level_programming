/*
 * File: 3-puts.c
 * Auth: Abdulhakeem A Yisa
 */

#include "main.h"
#include <unistd.h>

/**
 * _puts - Function that prints a string, followed by a new line
 * to stdout
 * @str: function formal parameter
 *
 * Return: nothing
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}

	_putchar('\n');
}

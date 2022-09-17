/*
 * File: 1-isdigit.c
 * Auth: Abdulhakeem A Yisa
 */

#include "main.h"

/**
 * _isdigit - "Function that checks for a digit (0 through 9)"
 * @c: function formal parameter
 *
 * Return: Always 0
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}

/*
 * File: 0-isupper.c
 * Auth: Abdulhakeem A Yisa
 */

#include "main.h"

/**
 * _isupper - "function that checks if a character is UPPERCASE"
 * @c: function formal parameter
 *
 * Return: Always 0
 *
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}

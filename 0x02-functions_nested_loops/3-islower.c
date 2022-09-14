/*
 * File: 3-islower.c
 * Auth: Abdulhakeem A Yisa
 */

#include "main.h"

/**
 * _islower - "Function that check for lowercase character"
 * @c: parameter for _islower function
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else

	return (0);
}


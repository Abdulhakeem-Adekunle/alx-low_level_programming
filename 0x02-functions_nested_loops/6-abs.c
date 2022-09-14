/*
 * File: 6-abs.c
 * Auth: Abdulhakeem A Yisa
 */

#include "main.h"

/**
 * _abs - "Function that computes the absolute value of an interger"
 * @n: Parameter
 *
 * Return: Always 0
 */

int _abs(int n)
{
	int abs;

	abs = n * (-1);

	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (abs);
	}

	return (0);
}

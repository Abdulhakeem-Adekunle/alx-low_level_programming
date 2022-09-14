/*
 * File: 4-isalpha.c
 * Auth: Abdulhakeem A Yisa
 */

#include "main.h"

/**
 * _isalpha - "Function that checks for alphabetic character"
 * @c: actual parameter
 *
 * Return: Always 0
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

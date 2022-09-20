/*
 * File: 1-swap.c
 * Auth: Abdulhakeem A Yisa
 */

#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: formal function parameter, but a pointer
 * @b: formal function parameter, but a pointer
 *
 * Return: nothing
 *a98 b42
 */

void swap_int(int *a, int *b)
{
	int s = *a;

	*a = *b;
	*b = s;
}

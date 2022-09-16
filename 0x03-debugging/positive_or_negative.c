/*
 * File: 0-positive_or_negative.c
 * Auth: Abdulhakeem A Yisa
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - "program that will assign a random number to the
 * variable n each time it is executed."
 * @n: Function formal parameter
 *
 * Return: Always (0)
 *
 */
int positive_or_negative(int n)
{
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}

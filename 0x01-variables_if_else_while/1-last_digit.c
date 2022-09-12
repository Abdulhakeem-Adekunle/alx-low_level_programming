/*
 * File: 1-last_digit.c
 * Auth: Abdulhakeem A Yisa
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - "This program will assign a random number to the variable n
 * each time is executed. And it will only print the
 * last digit of the number stored in variable n"
 *
 * Return: Always (0)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int d;

	d = n % 10;
	if (d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, d);
	}
	else if (d == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, d);
	}
	else if (d < 6 && d != 0)
	{
		printf("Last digit of %d is %d and is less that 6 and not 0\n", n, d);
	}
	return (0);
}

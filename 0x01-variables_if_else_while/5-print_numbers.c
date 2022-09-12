/*
 * File: 5-print_numbers.c
 * Auth: Abdulhakeem A Yisa
 */

#include <stdio.h>

/**
 * main - "Program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line"
 *
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d\n", num);
	}
}

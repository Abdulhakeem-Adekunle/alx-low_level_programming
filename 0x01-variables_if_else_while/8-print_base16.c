/*
 * File: 8-print_base16.c
 * Auth: Abdulhakeem A Adekunle
 */

#include <stdio.h>

/**
 * main - "Program that prints all the numbers of base 16 in lowercase"
 *
 * Return: Always 0
 */

int main(void)
{
	int num;
	char letter;

	for (num = 0; num <= 9; num++)
		putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}

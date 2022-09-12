/*
 * File: 3-print_alphabets.c
 * Auth: Abdulhakeem A Yisa
 */

#include <stdio.h>

/**
 * main - "Program that prints the alphabet in lowercase,
 * and then in uppercase."
 *
 * Return: Always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}

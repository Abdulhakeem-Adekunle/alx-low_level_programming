/*
 * File: 4-print_alphabt.c
 * Auth: Abdulhakeem A Yisa
 */

#include <stdio.h>

/**
 * main - "program that prints alphabets in lowercase,
 * print all the letters except q and e"
 *
 * Return: Always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
	}

	putchar('\n');

	return (0);
}

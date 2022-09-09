/*
 * File: 6-size.c
 * Auth: Abdulhakeem A Yisa
 */

#include <stdio.h>

/**
 * main - "Prints the size of various types on the computer"
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	char c;
	long int l;
	long int k;
	float f;

	printf("size of a char: %ld\n", sizeof(c));
	printf("size of an int: %ld\n", sizeof(i));
	printf("size of a long int: %ld\n", sizeof(l));
	printf("size of long long int: %ld\n", sizeof(k));
	printf("size of a float: %ld\n", sizeof(f));

	return (0);
}

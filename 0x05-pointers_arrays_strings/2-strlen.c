/*
 * File: 2-strlen.c
 * Auth: Abdulhakeem A Yisa
 */

#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: function formal parameter
 *
 * Return: Always 0
 *
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; ++s)
		count++;

	return (count);
}

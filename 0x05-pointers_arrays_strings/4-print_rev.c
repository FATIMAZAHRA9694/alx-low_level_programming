#include <stdio.h>
#include "main.h"
/**
* print_rev -a function that prints a string, in reverse
* @s: input
*Return: 0
*/
void print_rev(char *s)
	{
	int len = 0;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}

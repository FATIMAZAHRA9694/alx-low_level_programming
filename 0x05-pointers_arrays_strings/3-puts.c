#include "main.h"
#include <stdio.h>
/**
* _puts -a function that prints a string, followed by a new line
*@str: input
*Return: 0
*/
void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		putchar(str[l]);
		l++;
	}
	putchar ('\n');
}

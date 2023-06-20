#include "main.h"
/**
* main - print_alphabet_x10
*
*return - void
*/
void print_alphabet_x10(void)
{
	int n = 0;
	int i;

		while (n < 10)
		{
			for (i=97 ; i <= 122; i++)
			{_putchar(i);
			}
		_putchar('\n');
		n++;
		}
}

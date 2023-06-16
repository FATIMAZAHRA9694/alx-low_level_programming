#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 65;
	int b = 97;

	while (a <= 90)
{
	putchar (a);
	a++;
}
while (b <= 122)
{
	putchar (b);
	b++;
}
putchar ('\n');
return (0);
}

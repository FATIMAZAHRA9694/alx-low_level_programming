#include <string.h>
#include "main.h"
/**
*puts_half -function to print half str
*@str: string
*return: 0
*/
void puts_half(char *str)
{
int len = strlen(str);
int start = len / 2;

while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}

_putchar('\n');
}

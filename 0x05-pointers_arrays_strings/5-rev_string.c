#include <string.h>
#include "main.h"
/**
*rev_string -a function that reverses a string
*@s: input
*return: 0
*/
void rev_string(char *s)
{
int start = 0;
int end = strlen(s) - 1;
char temp;

while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}

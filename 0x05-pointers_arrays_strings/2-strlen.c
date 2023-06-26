#include "main.h"
/**
*int _strlen -function that returns the length of a string
*@s : input
*return: len
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{	s++;
			len++;
}
return (len);
}

table File  20 lines (17 sloc)  281 Bytes
#include <stdio.h>
#include "main.h"

/**
*_puts - Function that print a string, followed by a new line
*@str: the string to print
*Return: no error on success
*/

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}

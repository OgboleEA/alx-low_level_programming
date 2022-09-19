#include <stdio.h>
#include "main.h"

/**
 * _puts - print a given string to screen
 * @str: passed pointer argument for string
 *
 * Return: void
 */

void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		putchar(*(str + len));
		len++;
	}
	putchar('\n');
}

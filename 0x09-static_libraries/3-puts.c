#include "main.h"

/**
 *_puts - prints a string
 *@str: string to print
 *
 * Description: prints a string 
 * On success: return the number of c
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}

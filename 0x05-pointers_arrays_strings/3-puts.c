#include "main.h"
/**
 * _puts - check the code for Alx School students.
 * @str: pointer int type
 * Return: Always 0.
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}

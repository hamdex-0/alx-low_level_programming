#include "main.h"
/**
 * puts_half - check the code for Alx School students.
 * @str: pointer int type
 */
void puts_half(char *str)
{
int i;
for (i = 0; *str != '\0'; i++)
str++;

i = i / 2;

for (i = i; i != 0; i--)
_putchar(*(str - i));

_putchar('\n');
}

#include "main.h"
/**
 * _atoi - check the code for alx School students.
 * @s: pointer char type
 * Return: Always 0.
 */
int _atoi(char *s)
{
int negative = 1, i = 0;
unsigned int numero = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
negative *= -1;

else if (s[i] >= 0 + '0' && s[i] < 10 + '0')
numero = numero * 10 + (s[i] - '0');

else if (s[i - 1] >= 0 + '0' && s[i - 1] < 10 + '0')
break;
}

return (numero *negative);
}

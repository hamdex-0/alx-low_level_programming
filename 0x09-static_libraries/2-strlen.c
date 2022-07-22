#include "main.h"
/**
 * _strlen - check the code for Alx School students.
 * @s: is a pointer int char type
 * Return: Always 0.
 */
int _strlen(char *s)
{
int len;
for (len = 0; *s != '\0'; len++)
s++;

return (len);
}

#include "main.h"
/**
 * _strcpy - check the code for ALX School students.
 * @dest: pointer char type
 * @src: pointer char type
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; *src != '\0'; i++)
{
dest[i] = *src;
src++;
}

dest[i++] = *src;

return (dest);
}

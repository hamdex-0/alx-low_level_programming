#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - check the code for ALX School students.
*
* Return: Always 0.
*/
int main(void)
{
char seed[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char password[22];
int i, n, passw, complem;

srand(time(0));

for (i = 0; passw < 2772; i++)
{
n = rand() % 10;
password[i] = seed[n];
passw += password[i];
}
complem = 2772 - passw;
password[i] = complem;
printf("%s\n",  password);
return (0);
}

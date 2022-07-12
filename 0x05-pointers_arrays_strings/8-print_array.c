#include "main.h
/**
* print_array - check the code for Alx School students.
* @a: pointer int type
* @n: is a int variable
* Return: Always 0.
*/
void print_array(int *a, int n)
{
int i, inte;

for (i = 0; i < n; i++)
{

inte = *(a + i);

printf(' %d ', inte);

if (i != n - 1)
printf(", ");
}

printf("\n");
}

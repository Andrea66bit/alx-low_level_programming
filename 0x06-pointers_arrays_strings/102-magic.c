#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
/**
 * main - Entry point
 * 
 * Description: 'the program's description'
 * @parameter: describe the parameter
 * 
 * Return: Always 0 (Success)
int main(void)
{
    Code goes here
}
*/
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}

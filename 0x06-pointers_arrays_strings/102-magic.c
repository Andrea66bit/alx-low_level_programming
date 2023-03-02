#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
/**
* _strncat - a function that concatenates two strings.
* @dest: the destination string to be concatenated to
* @src: the source string to concatenate
* @n: the most bytes to concatenate to
*
* Description: it will use at most n bytes from src
* and src does not need to be null-terminated if it contains n or more bytes
*
* Return: a pointer to the resulting string dest.
*/
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}


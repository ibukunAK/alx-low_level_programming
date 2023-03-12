#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int a;
int b;
if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);

printf("%d\n", a *b);
return (0);
}
printf("error\n";
return (0);
}

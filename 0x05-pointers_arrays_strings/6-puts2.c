#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
*/
void puts2(char *str)
{
int longx = 0;
int t = 0;
char *a = str;
int b;

while (*a != '\0')
{
a++;
longx++;
}
t = longx - 1;
for (b = 0 ; b <= t ; b++)
{
if (b % 2 == 0)
{
_putchar(str[b]);
}
}
_putchar('\n');
}

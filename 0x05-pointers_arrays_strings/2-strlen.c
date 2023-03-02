#include <stdio.h>
#include "main.h"

/**
 * _strlen - finds that returns the length of a string
 * @s: ointers to the string
 * Return: i
 */

int _strlen(char *s)
{
int i = 0;

while (s[i])
i++;


return (i);
}

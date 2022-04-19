#include "main.h"

/**
 * _strlen - length of string
 * @s: Apointer to an integer
 * Return: Always
 */

int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return(u);
}

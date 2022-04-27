#include "main.h"

/**
 * _strcmp - concatenaters two strings
 * @s1: second string to be concatenated to src
 * @s2: first string to be concatenated to dest
 * Return: Pointer to the resulting string dest
 */

int _strcmp(char *s1, char *s2)
{
int x;

for (x = 0; s1[x] != '\0' || s2[x] != '\0'; x++)
{
if (s1[x] != s2[x])
{
return (s1[x] - s2[x]);
}
}
return (0);
}

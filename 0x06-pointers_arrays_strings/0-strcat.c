#include "main.h"

/**
 * _strcat - concatenaters two strings
 * @dest: second string to be concatenated to src
 * @src: first string to be concatenated to dest
 * Return: Pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int x, y;

for (x = 0; dest[x] != '\0'; x++)
;
for (y = 0; src[y] != '\0'; y++)
{
dest[x] = src[y];
x++;
}
dest[x] = '\o';
return (dest);
}

#include "main.h"

/**
 * _strncat - concatenaters two strings
 * @dest: second string to be concatenated to src
 * @src: first string to be concatenated to dest
 * @n: integer that determines number of bytes to the copied
 * Return: Pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
int x, y;

for (x = 0; dest[x] != '\0'; x++)
{
for (y = 0; src[y] != '\0' && n > 0; y++, n--, x++)
{
dest[x] = src[y];
}
}
return (dest);
}

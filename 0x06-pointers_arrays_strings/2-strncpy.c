#include "main.h"

/**
 * _strncpy - concatenaters two strings
 * @dest: second string to be concatenated to src
 * @src: first string to be concatenated to dest
 * @n: integer that determines number of bytes to the copied
 * Return: Pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int x;

for (x = 0; x < n && src[x] != '\0'; x++)
{
dest[x] = src[x];
}
for (; n > x; x++)
{
dest[x] = '\0';
}
return (dest);
}

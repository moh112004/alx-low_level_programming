#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the result string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j, k;

i = 0;
j = 0;
k = 0;

while (dest[i] != '\0')
i++;
dest[i] = ' ';
while (src[j] != '\0')
j++;
while (src[k] != '\0' && k < n)
{
char t = src[k];
dest[i + j] = t;
k++;
}
dest[i+k] = '\0';
return (dest);
}

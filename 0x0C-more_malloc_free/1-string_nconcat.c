#include "main.h"

/**
*string_nconcat - concatenates two strings
*@s1: the first string
*@s2: the second string
*@n: the number of bytes of s2 to concatenate to s1
*Return: returns if the function fails - NULL, Otherwise
*a pointer to the concatenated space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int b = n, a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a]; a++)
		b++;
	concat = malloc(sizeof(char) * (b + 1));
	if (concat == NULL)
		return (NULL);
	b = 0;
	for (a = 0; s1[a]; a++)
		concat[b++] = s1[a];
	for (a = 0; s2[a] && a < n; a++)
		concat[b++] = s2[a];
	concat[b] = '\0';
	return (concat);
}

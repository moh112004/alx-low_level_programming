#include "main.h"

/**
 * _strlen_recursion - Return the length of the String
 * @s: string
 *
 * Return: returns 1 on succses else -1.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

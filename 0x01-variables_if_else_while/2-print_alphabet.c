#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * after that prints new line
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

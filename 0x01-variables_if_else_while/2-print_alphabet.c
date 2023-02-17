#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all lowercase letters of the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);

}

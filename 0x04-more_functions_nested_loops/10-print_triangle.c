#include <stdio.h>

/**
 * print_triangle - prints a triangle of '#' characters of a given size
 * @size: the size of the triangle to be printed
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		putchar('\n'); /* print a new line and return */
		return;
	}

	for (int row = 1; row <= size; row++) /* loop through each row */
	{
		for (int col = 1; col <= row; col++) /* print # for each column in the row */
		{
			putchar('#');
		}
		putchar('\n'); /* print a new line after each row */
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_triangle(5); /* call the print_triangle function with size 5 */

	return (0);
}


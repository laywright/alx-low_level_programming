#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int prev = 1;
    int curr = 2;
    int i;

    putchar(prev + '0');
    putchar(',');
    putchar(' ');
    putchar(curr + '0');

    for (i = 3; i <= 98; i++)
    {
        int next = prev + curr;
        putchar(',');
        putchar(' ');
        if (next > 9)
        {
            putchar((next / 10) + '0');
            putchar((next % 10) + '0');
        }
        else
        {
            putchar(next + '0');
        }
        prev = curr;
        curr = next;
    }

    putchar('\n');

    return (0);
}


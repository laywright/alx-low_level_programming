#include <stdio.h>

void print_times_table(int n)
{
    if (n < 0 || n > 15) {
        return;
    }

    int i, j;
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            int result = i * j;
            if (result > 99) {
                putchar(result / 100 + '0');
            }
            if (result > 9) {
                putchar((result / 10) % 10 + '0');
            }
            putchar(result % 10 + '0');
            if (j < n) {
                putchar(',');
                putchar(' ');
            }
        }
        putchar('\n');
    }
}


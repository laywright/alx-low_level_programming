#include <stdio.h>

int main(void)
{
    int sum = 0;
    int i;

    for (i = 0; i < 1024; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    int digit;
    do {
        digit = sum % 10;
        sum /= 10;
        putchar(digit + '0');
    } while (sum != 0);

    putchar('\n');

    return 0;
}


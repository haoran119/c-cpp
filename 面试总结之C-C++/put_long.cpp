/*
use putchar to print out an unsigned long in decimal
    https://algogeeks.narkive.com/yOmKvuqL/use-putchar-to-print-out-an-unsigned-long-in-decimal
*/

#include <iostream>

void putlong(unsigned long a)
{
    if (a > 9) {
        putlong(a / 10);
    }

    putchar(a % 10 + '0');
}

int main()
{
    unsigned long a = 255;
    putlong(a);

    return 0;
}

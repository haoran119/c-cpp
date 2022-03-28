/*
Find out if a machine's stack grows up or down in memory
C Program to find direction of growth of stack - Aticleworld
    https://aticleworld.com/c-program-to-find-direction-of-growth-of-stack/
c - Does stack grow upward or downward? - Stack Overflow
    https://stackoverflow.com/questions/1677415/does-stack-grow-upward-or-downward
*/

#include <iostream>

void CheckStackGrowsUpOrDown(int* input)
{
    int temp1{0};

    // compare the address of local variables in main() and CheckStackGrowsUpOrDown()
    if (&temp1 > input) {
        std::cout << "Stack grows up in memory" << std::endl;
    }
    else {
        std::cout << "Stack grows down in memory" << std::endl;
    }

    std::cout << input << std::endl;    // 0x7ff7b2bd45d8
    std::cout << &temp1 << std::endl;   // 0x7ff7b2bd45b4
}

int main()
{
    int temp{0};

    CheckStackGrowsUpOrDown(&temp); // Stack grows down in memory

    return 0;
}

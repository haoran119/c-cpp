/*
Program to find whether a given number is power of 2 - GeeksforGeeks
    https://www.geeksforgeeks.org/program-to-find-whether-a-given-number-is-power-of-2/
*/

#include <iostream>

bool IsPowerOfTwo(int n)
{
    // n & (n - 1) == 0 if n is power of two or n == 0
    return n && (!(n & (n - 1)));
}

int main()
{
    for (size_t i = 0; i < 10; ++ i) {
        std::cout << IsPowerOfTwo(i) << " ";    // 0 1 1 0 1 0 0 0 1 0
    }

    std::cout << std::endl;

    return 0;
}

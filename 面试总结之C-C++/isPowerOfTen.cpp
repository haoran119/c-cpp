/*
判断一个数是不是10的幂
细心，注意判断条件。
*/

//
//  main.cpp
//  LEETCODE
//
//  Created by Hao on 2020/8/29.
//  Copyright © 2020年 Hao. All rights reserved.
//

#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPowerOfTen(int n)
    {
        // edge case including negative numbers
        if (n < 1)
            return false;

        while (n % 10 == 0) {
            n /= 10;
        }

        return n == 1;
    }
};

int main(int argc, char* argv[])
{
    Solution    testSolution;

    int result = 1;

    result = result && testSolution.isPowerOfTen(1);
    result = result && testSolution.isPowerOfTen(10);
    result = result && testSolution.isPowerOfTen(10000000);
    result = result && !testSolution.isPowerOfTen(0);
    result = result && !testSolution.isPowerOfTen(-1);
    result = result && !testSolution.isPowerOfTen(110);

    if (result)
        cout << "ALl tests pass!" << endl;

    return 0;
}

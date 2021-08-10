//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include <iostream>
using namespace std;

class Solution
{
public:
    int Fibonacci(const int& n)
    {
        if (n == 0)
            return 0;
        else if (n == 1)
            return 1;
        else {
            int t, f0 = 0, f1 = 1;
            
            for (int i = 2; i < n + 1; i ++)
            {
                t = f1;
                f1 = f0 + f1;
                f0 = t;
            }
            
            return f1;
        }
    }
    
};

int main(int argc, char* argv[])
{
    Solution    testSolution;
    
    for (auto i = 0; i < 10; i ++)
        cout << testSolution.Fibonacci(i) << endl;
    
    return 0;
}

/*
输出Fibonacci数列的第N项

注意解法有递归，非递归和数学方法。
输入N最好用unsigned int类型。

0
1
1
2
3
5
8
13
21
34
Program ended with exit code: 0
*/

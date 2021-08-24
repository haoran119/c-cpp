//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include <iostream>
using namespace std;

template <typename T>
T fAbs(T x)
{
    return x < 0 ? -x : x;
}

int main()
{
    int n = -5;
    double d = -5.5;
    
    cout << fAbs(n) << endl;
    cout << fAbs(d) << endl;
    
    return 0;
}

//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include <iostream>
using namespace std;

namespace nsT {
    template <typename T>
    
    T min(T a, T b)
    {
        return (a < b) ? a : b;
    }
}

int main ()
{
    int a = 10, b = 9;
    int c = min(a, b);
    
    cout << c << endl;
    
    double d = 1.0, e = 2.0;
    double f = min(d, e);
    
    cout << f << endl;
    
    return 0;
}

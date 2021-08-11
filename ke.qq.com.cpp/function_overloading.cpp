//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include <iostream>
using namespace std;

int square(int x)
{
    cout << __FILE__ << " " << __LINE__ << " " << __func__ << endl; // File / Line / Function
    return x * x;
}

double square(double x)
{
    cout << __FILE__ << " " << __LINE__ << " " << __func__ << endl; // File / Line / Function
    return x * x;
}

int main()
{
    cout << "square(10)\n" << square(10) << endl;
    cout << "suqare(1.1)\n" << square(1.1) << endl;
    
    return 0;
}

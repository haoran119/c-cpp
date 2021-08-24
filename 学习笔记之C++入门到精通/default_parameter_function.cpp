//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include <iostream>
using namespace std;

void foo(int i, int j = 5, int k = 10);
//void foo(int, int = 5, int = 10);

int main()
{
    foo(20);
    foo(20, 30);
    foo(20, 30, 40);
    
    return 0;
}

void foo(int i, int j, int k)
{
    cout << i << " " << j << " " << k << endl;
}

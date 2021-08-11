//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include "Increase.hpp"

#include <iostream>
using namespace std;

int main ()
{
    Increase    val(100);
    Increase    val2 = ++ val;
    
    cout << "val = " << val.getVal() << "\n" << endl;
    cout << "val2 = " << val2.getVal() << "\n" << endl;
    
    Increase    val3 = val ++;
    
    cout << "val3 = " << val3.getVal() << "\n" << endl;
    cout << "val = " << val.getVal() << "\n" << endl;
    
    return 0;
}

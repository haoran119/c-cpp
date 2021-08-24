//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include <iostream>
using namespace std;

#include "class_template.hpp"

using namespace nsT;

int main ()
{
    // Using int as data type
    Example<int>    val(1);
    
    int data = val.get();
    
    cout << "data = " << data << "\n" << endl;
    
    // Using double as data type
    Example<double> val2(2.0);
    
    cout << val2.get() << "\n" << endl;
    
    Test    test;
    
    // Using class as data type
    Example<Test>   val3(test);
    
    return 0;
}

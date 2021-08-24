//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include "RefCount.h"
#include "SmartPtr.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    cout << "SmartPtr<Sample> p = new Sample; --->\n" << endl;
    
    SmartPtr<Sample> p = new Sample; // Sample*
    
    cout << "SmartPtr<Sample> p2 = new Sample; --->\n" << endl;
    
    SmartPtr<Sample> p2 = new Sample;

    cout << "p = p2; --->\n" << endl;
    
    p = p2;
    
    cout << "p->doSomething(); --->\n" << endl;
    
    p->doSomething();
    
    cout << "(*p).doSomething(); --->\n" << endl;
    
    (*p).doSomething();
    
    return 0;
}

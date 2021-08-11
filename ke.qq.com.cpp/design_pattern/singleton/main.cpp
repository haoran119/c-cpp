//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include "Singleton.hpp"

#include <iostream>
using namespace std;

int main ()
{
    /*
    Singleton* val = new Singleton();   // ERROR : Calling a private constructor of class 'Singleton'
    delete val;                         // ERROR : Calling a private destructor of class 'Singleton'
    val = nullptr;
    */
    
    Singleton::getInstance()->doSomething();
    
    Singleton::getInstance()->destroy();
    
    return 0;
}

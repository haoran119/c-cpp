//
//  Singleton.cpp
//  LeetCode
//
//  Created by Hao on 2017/12/27.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include "Singleton.hpp"

#include <iostream>
using namespace std;

// 静态成员变量需要在类外初始化
Singleton* Singleton::instance = nullptr;

Singleton::Singleton()
{
    cout << "Constructing Singleton instance --->\n"  << endl;
}

Singleton::~Singleton()
{
    cout << "Destructing Singleton instance --->\n" << endl;
}

// Not thread safe,
// Need to use pthread_mutex_lock/unlock
Singleton* Singleton::getInstance()
{
    Singleton* ret = instance;
    
    if (instance == nullptr) {
        instance = new Singleton();
        ret = instance;
    }
    
    return ret;
}

void Singleton::doSomething()
{
    cout << __func__ << " , LINE " << __LINE__ << "\n" << endl;
}

void Singleton::destroy()
{
    delete this;
    instance = nullptr;
}

//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include <iostream>
using namespace std;

#include "person.hpp"

int main ()
{
    Person p("Joe");
    Person p3("Tom");
    
    Person p2 = p; // 深拷贝：自定义拷贝构造函数，指向不同内存空间。析构时没有问题。
    
    cout << "Print p --->" << endl;
    p.Print();
    
    cout << "Print p2 --->" << endl;
    p2.Print();
    
    p2 = p3; // 重载赋值运算符
    
    cout << "Print p3 --->" << endl;
    p3.Print();
    
    cout << "Print p2 --->" << endl;
    p2.Print();

    return 0;
}

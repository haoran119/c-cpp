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
    
    Person p2 = p; // 浅拷贝：使用编译器提供的默认的拷贝构造函数，指向同一块内存空间。导致析构时出现问题，同一块内存空间被析构两次。
    
    cout << "Print p --->" << endl;
    p.Print();
    
    cout << "Print p2 --->" << endl;
    p2.Print();
    
    return 0;
}

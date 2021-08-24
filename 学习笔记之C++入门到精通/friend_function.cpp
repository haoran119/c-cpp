//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include <iostream>
using namespace std;

// 类的前置声明
class X;

class Y
{
public:
    void f(X *);    // 对前置声明的类只能使用指针作为行参，因为在32位系统下，一个指针占4个字节是固定的，编译器可预判的
//    void b(X);    // 用类作为行参则出错，因为编译器无法判断类的类型及大小
    
private:
    X*  pX;
};

/*
// ERROR : Variable has incomplete type 'X'
void Y::b(X x)
{
}
*/

class X
{
public:
    void initialize();
    void print();
    friend void fG(X *, int);   // Global friend
    friend void Y::f(X *);      // class member friend
    friend class Z;             // Entire class is a friend
    friend void h();            // Global friend
    
private:
    int i;
};

void X::initialize()
{
    i = 0;
}

void X::print()
{
    cout << "i = " << i << "\n" << endl;
}

void fG(X *x, int i)
{
    x->i = i;
}

void Y::f(X *x)
{
    x->i = 47;
}

class Z
{
public:
    void initialize();
    void g(X *x);
    
private:
    int j;
};

void Z::initialize()
{
    j = 100;
}

void Z::g(X *x)
{
    x->i += j;
}

void h()
{
    X x;
    
    x.i = 100;  // Direct data manipulation
    x.print();
}

int main ()
{
    X x;
    
    x.initialize();
    x.print();
    
    // friend void fG(X *, int);   // Global friend
    fG(&x, 9);
    x.print();

    // friend void Y::f(X *);      // class member friend
    Y y;
    
    y.f(&x);
    x.print();

    // friend class Z;             // Entire class is a friend
    Z z;
    
    z.initialize();
    z.g(&x);
    x.print();

    // friend void h();            // Global friend
    h();
    
    return 0;
}

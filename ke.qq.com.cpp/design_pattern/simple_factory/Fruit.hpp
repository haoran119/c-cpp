//
//  Fruit.hpp
//  LeetCode
//
//  Created by Hao on 2018/1/5.
//  Copyright © 2018年 Hao. All rights reserved.
//

#ifndef Fruit_hpp
#define Fruit_hpp

#include <iostream>
using namespace std;

class Fruit
{
public:
    virtual ~Fruit() = 0; // 接口类纯虚函数的析构函数需要定义
    virtual void plant() = 0;
    virtual void grow() = 0;
    virtual void harvest() = 0;
};

class Apple : public Fruit
{
public:
    Apple();
    ~Apple();
    
    void plant();
    void grow();
    void harvest();
};

class Grape : public Fruit
{
public:
    Grape();
    ~Grape();
    
    void plant();
    void grow();
    void harvest();
};

enum {
    APPLE = 0,
    GRAPE = 1,
    ORANGE = 2
};

// 前置声明
class Orange;

class Gardener
{
public:
    Gardener();
    ~Gardener();
    
    // 0 apple, 1 grape, orange
    Fruit * getFruit(int);
    
private:
    Apple * m_apple;
    Grape * m_grape;
    Orange * m_orange;
};

class Orange : public Fruit
{
public:
    Orange();
    ~Orange();
    
    void plant();
    void grow();
    void harvest();
};

#endif /* Fruit_hpp */

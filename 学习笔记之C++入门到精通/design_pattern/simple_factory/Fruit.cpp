//
//  Fruit.cpp
//  LeetCode
//
//  Created by Hao on 2018/1/5.
//  Copyright © 2018年 Hao. All rights reserved.
//

#include "Fruit.hpp"
#include <iostream>
using namespace std;

Fruit::~Fruit()
{
    cout << "Fruit destructing\n" << endl;
}

Apple::Apple()
{
    cout << "Apple constructing\n" << endl;
}

Apple::~Apple()
{
    cout << "Apple destructing\n" << endl;
}

void Apple::plant()
{
    cout << "Apple planting\n" << endl;
}

void Apple::grow()
{
    cout << "Apple growing\n" << endl;
}

void Apple::harvest()
{
    cout << "Apple harvesting\n" << endl;
}
    
Grape::Grape()
{
    cout << "Grape constructing\n" << endl;
}

Grape::~Grape()
{
    cout << "Grape destructing\n" << endl;
}

void Grape::plant()
{
    cout << "Grape planting\n" << endl;
}

void Grape::grow()
{
    cout << "Grape growing\n" << endl;
}

void Grape::harvest()
{
    cout << "Grape harvesting\n" << endl;
}

Orange::Orange()
{
    cout << "Orange constructing\n" << endl;
}

Orange::~Orange()
{
    cout << "Orange destructing\n" << endl;
}

void Orange::plant()
{
    cout << "Orange planting\n" << endl;
}

void Orange::grow()
{
    cout << "Orange growing\n" << endl;
}

void Orange::harvest()
{
    cout << "Orange harvesting\n" << endl;
}

Gardener::Gardener()
{
    cout << "Gardener constructing\n" << endl;
    
    m_apple = nullptr;
    m_grape = nullptr;
    m_orange = nullptr;
}

Gardener::~Gardener()
{
    cout << "Gardener destructing\n" << endl;
    
    if (m_apple != nullptr) {
        delete m_apple;
        m_apple = nullptr;
    }
    
    if (m_grape != nullptr) {
        delete m_grape;
        m_grape = nullptr;
    }

    if (m_orange != nullptr) {
        delete m_orange;
        m_orange = nullptr;
    }
}

Fruit * Gardener::getFruit(int type)
{
    Fruit * fruit = nullptr;
    
    if (APPLE == type) {
        if (nullptr == m_apple)
            m_apple = new Apple();
        
        fruit = m_apple;
    } else if (GRAPE == type) {
        if (nullptr == m_grape)
            m_grape = new Grape();
        
        fruit = m_grape;
    } else if (ORANGE == type) {
        if (nullptr == m_orange)
            m_orange = new Orange();
        
        fruit = m_orange;
    }
    
    return fruit;
}

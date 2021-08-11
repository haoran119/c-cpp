//
//  Furniture.hpp
//  LeetCode
//
//  Created by Hao on 2017/12/31.
//  Copyright © 2017年 Hao. All rights reserved.
//

#ifndef Furniture_hpp
#define Furniture_hpp

#include <iostream>
using namespace std;

class Furniture
{
public:
    Furniture(int weight = 0)
        : m_weight(weight)
    {
        cout << "Furniture constructing --->\n" << endl;
    }
    
    void setWeight(int weight)
    {
        m_weight = weight;
    }
    
    int getWeight() const
    {
        return m_weight;
    }
    
private:
    int m_weight;
};

// Two classes virtually inheriting Furniture
class Sofa : public virtual Furniture
{
public:
    Sofa(int weight = 0);
    
    void watchTV()
    {
        cout << __func__ << "\n" << endl;
    }
};

class Bed : public virtual Furniture
{
public:
    Bed(int weight = 0);
    
    void sleep()
    {
        cout << __func__ << "\n" << endl;
    }
};

// 多重继承
class SofaBed : public Sofa, public Bed
{
public:
    SofaBed();
    
    void foldout()
    {
        cout << __func__ << "\n" << endl;
    }
};

#endif /* Furniture_hpp */

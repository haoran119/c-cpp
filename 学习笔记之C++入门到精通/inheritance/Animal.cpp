//
//  Animal.cpp
//  LeetCode
//
//  Created by Hao on 2017/12/29.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include "Animal.hpp"

#include <iostream>
using namespace std;

namespace T
{
    Animal::Animal(int age, string location)
        : m_age(age), m_location(location)
    {
        cout << "Animal constructing --->\n" << endl;
    }
    
    Animal::~Animal()
    {
        cout << "Animal destructing --->\n" << endl;
    }
    
    int Animal::getAge() const
    {
        return m_age;
    }
    
    void Animal::setAge(int age)
    {
        m_age = age;
    }
    
    string Animal::getLocation() const
    {
        return m_location;
    }
    
    void Animal::setLocation(string location)
    {
        cout << __func__ << " --->\n" << endl;
    }
    
    Cat::Cat(int age, int color, string location)
        : Animal(age, location), m_color(color)
    {
        cout << "Cat constructing --->\n" << endl;
    }
    
    Cat::~Cat()
    {
        cout << "Cat destructing --->\n" << endl;
    }
    
    int Cat::getColor() const
    {
        return m_color;
    }
    
    void Cat::setColor(int color)
    {
        m_color = color;
    }
    
    void Cat::setCatLocation(string location)
    {
        Animal::setLocation(location);
    }
    
    Dog::Dog(int age, int weight, string location)
        : Animal(age, location), m_weight(weight)
    {
        cout << "Dog constructing --->\n" << endl;
    }
    
    Dog::~Dog()
    {
        cout << "Dog destructing --->\n" << endl;
    }
    
    int Dog::getWeight() const
    {
        return m_weight;
    }
    
    void Dog::setWeight(int weight)
    {
        m_weight = weight;
    }
    
} // end of namespace T

//
//  Animal.hpp
//  LeetCode
//
//  Created by Hao on 2017/12/29.
//  Copyright © 2017年 Hao. All rights reserved.
//

#ifndef Animal_hpp
#define Animal_hpp

#include <string>
using namespace std;

namespace T
{
    class Animal
    {
    public:
        Animal(int age, string location);
        ~Animal();
        
        void setAge(int age);
        int getAge() const;
        
        string getLocation() const;
        
    protected:
        void setLocation(string location);
        
        string m_location;
        
    private:
        int m_age;
    };
    
    class Cat : public Animal
    {
    public:
        Cat(int age, int color, string location);
        ~Cat();
        
        int getColor() const;
        void setColor(int color);
        
        void setCatLocation(string location);
        
    private:
        int m_color;
    };
    
    class Dog : public Animal
    {
    public:
        Dog(int age, int weight, string location);
        ~Dog();
        
        int getWeight() const;
        void setWeight(int weight);
        
    private:
        int m_weight;
    };
}

#endif /* Animal_hpp */

//
//  Animal.hpp
//  LeetCode
//
//  Created by Hao on 2018/1/4.
//  Copyright © 2018年 Hao. All rights reserved.
//

#ifndef Animal_hpp
#define Animal_hpp

#include <iostream>
using namespace std;

namespace T
{
    class Animal
    {
    public:
        Animal()
        {
            cout << "Animal constructing\n" << endl;
            
        }
        
        // 为基类声明虚析构函数
        virtual ~Animal()
        {
            cout << "Animal destructing\n" << endl;
        }
        
        // Need to add "const" to avoid error Member function 'makeSound' not viable: 'this' argument has type 'const T::Animal', but function is not marked const
        void makeSound() const
        {
            cout << "Animal make sound\n" << endl;
        }
        
        // "virtual" 只需要在声明时加上，不需要在定义时加上
        virtual void smile() const;

        /*
        virtual void smile() const = 0; // pure virtual function
        */
        
        /*
        virtual void smile() const
        {
            cout << "Animal smile\n" << endl;
        }
        */
    };
    
    class Dog : public Animal
    {
    public:
        Dog()
        {
            cout << "Dog constructing\n" << endl;
        }
        
        ~Dog()
        {
            cout << "Dog destructing\n" << endl;
        }
        
        void makeSound() const
        {
            cout << "Dog make sound\n" << endl;
        }

        void smile() const
        {
            cout << "Dog smile\n" << endl;
        }
    };

    class Cat : public Animal
    {
    public:
        Cat()
        {
            cout << "Cat constructing\n" << endl;
        }
        
        ~Cat()
        {
            cout << "Cat destructing\n" << endl;
        }
        
        void makeSound() const
        {
            cout << "Cat make sound\n" << endl;
        }
        
        void smile() const
        {
            cout << "Cat smile\n" << endl;
        }
    };
}

#endif /* Animal_hpp */

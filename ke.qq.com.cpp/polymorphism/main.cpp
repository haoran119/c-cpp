//
//  main.cpp
//  LeetCode
//
//  Created by Hao on 2017/3/16.
//  Copyright © 2017年 Hao. All rights reserved.
//

#include "Animal.hpp"
using namespace T;

void func(const Animal & animal)
{
    cout << "Pass by reference ---> \n" << endl;
    
    animal.makeSound();
    animal.smile();
}

void foo(Animal * pAnimal)
{
    cout << "Pass by pointer ---> \n" << endl;

    pAnimal->makeSound();
    pAnimal->smile();
}

void bar(Animal animal)
{
    cout << "Pass by value ---> \n" << endl;

    animal.makeSound();
    animal.smile();
}

int main ()
{
    {
        Dog dog;
        Cat cat;
        
        cout << "sizeof(Animal) : " << sizeof(Animal) << "\n" << endl;
        cout << "sizeof(Dog) : " << sizeof(Dog) << "\n" << endl;
        cout << "sizeof(Cat) : " << sizeof(Cat) << "\n" << endl;

        func(dog);
        
        func(cat);
        
        foo(&dog);
        
        foo(&cat);
        
        bar(dog);
        
        bar(cat);
    }
    
    cout << "为多态基类声明虚析构函数 --->\n" << endl;
    
    {
        Animal * pCat = new Cat;
        
        pCat->makeSound();
        pCat->smile();
        
        foo(pCat);
        
        // 如果不声明为虚析构函数，则只会调用基类Animal的析构函数，而不会调用派生类Cat的析构函数，造成内存泄漏
        delete pCat;
    }
    
    return 0;
}
